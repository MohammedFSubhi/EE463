// Question 3
// Mohammed Faisal Subhi 2035752

#include <stdio.h> 

int main(int argc, char *argv[]){


char name[60];
printf("Enter your full name: ");
scanf("%[^\n]", name);

int age;
printf("Enter your age: ");
scanf("%d", &age);

// to be able to use scanf that end when user enter newline again 
getchar();

char address[60];
printf("Enter your address: ");
scanf("%[^\n]", address);

printf("\n\n--------------------------");
printf("\nName: %s\n", name);
printf("Age: %d", age);
printf("\nAddress %s\n", address);
printf("--------------------------\n\n");}
