// LAB Assignment 1 
// Question 2
// Mohammed Faisal Subhi
// 2035752

/* *
* Author: Mohammed Subhi
* Description: This code could be use to decrept data
* RSA Decryption using OpenSSL library and Python encode/decode
* */

#include <stdio.h>
#include <string.h>
#include <openssl/bn.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


void printBN(char *msg, BIGNUM *tmp){
char *number_str = BN_bn2hex(tmp); // Convert BIGNUM to hex
printf("%s%s\n", msg, number_str); // Print hex
OPENSSL_free(number_str); // Free memory
}

int main(int argc, char *argv[]){
BN_CTX *ctx = BN_CTX_new();

// Parameter 
// Public-Key (Encryption Key)
char e[] = "010001";
// Product of large prime numbers
char n[] = "E103ABD94892E3E74AFD724BF28E78366D9676BCCC70118BD0AA1968DBB143D1";
// totient of 𝑛, it is Euler’s totient function phi(n)
char Qn[] = "E103ABD94892E3E74AFD724BF28E78348D52298BD687C44DEB3A81065A7981A4";

// Here initialize all needed BIGNUM variables
// 1- Encryption Key variable
BIGNUM *EncryptionKey = BN_new();
// 2- Decryption Key variable
BIGNUM *DecryptionKey = BN_new();
// 3- product of large prime numbers p and q
BIGNUM *ProductPQ = BN_new();
// 4- Totient of (n) Euler's totient function
BIGNUM *Totient = BN_new();
// 5- Encrypted Message variable
BIGNUM *EncryptedMessage = BN_new();
// 6- Decrypted Ciphertext variable
BIGNUM *DecryptedCiphertext = BN_new();

// Find Decryption Key (d) using (e) and (Phin):
// 1- Assign value to (e) Encryption Key from hex
BN_hex2bn(&EncryptionKey, e);
// 2- Assign value to (Phin) Encryption Key from hex
BN_hex2bn(&Totient, Qn);
// 3- Calculate the Decryption Key (Private Key) d=e mod(Phi(n))
BN_mod_inverse(DecryptionKey, EncryptionKey, Totient, ctx);


char *CC= malloc(100 * sizeof(char));
printf("\nEnter your Encrypted Message:\n");
// Read the Encrypted Message from the user to variable CC
fgets(CC, 100, stdin);
// Assign the input value in variable (CC) to Encrypted Message variable
BN_hex2bn(&EncryptedMessage, CC);


/*
Decrypt ciphertext using D=C^d(mod(n)) ,
where: (D) is the Decrypted Ciphertext and (C) is the Ciphertext
*/
// Assign value to (n) product of two large prime numbers from hex
BN_hex2bn(&ProductPQ, n);
// decrypt Ciphertext using the Private Key
BN_mod_exp(DecryptedCiphertext, EncryptedMessage, DecryptionKey, ProductPQ, ctx);



// Convert Hex string to ASCII letters
printf("\nOriginal Message:\n");
char str1[500]="print(\"";
char *str2 = BN_bn2hex(DecryptedCiphertext);
char str3[]="\".decode(\"hex\"))";
strcat(str1,str2);
strcat(str1,str3);
char* args[]={"python2", "-c",str1, NULL};
execvp("python2", args);
return EXIT_SUCCESS;
}
