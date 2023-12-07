// LAb Assignment 1 
// Question 1
// Mohammed Faisal Subhi
// 2035752

#include <stdio.h>

// method that convert number into letter 
char GetLetter(int number) {

 char Letter;

   switch (number) {
    case 1:
      Letter = 'A';
      break;
    case 2:
      Letter = 'B';
      break;
    case 3:
      Letter = 'C';
      break;
    case 4:
      Letter = 'D';
      break;
    case 5:
      Letter = 'E';
      break;
    case 6:
      Letter = 'F';
      break;
    case 7:
      Letter = 'G';
      break;
    case 8:
      Letter = 'H';
      break;
    case 9:
      Letter = 'I';
      break;
    case 10:
      Letter = 'J';
      break;
    case 11:
      Letter = 'K';
      break;
    case 12:
      Letter = 'L';
      break;
    case 13:
      Letter = 'M';
      break;
    case 14:
      Letter = 'N';
      break;
    case 15:
      Letter = 'O';
      break;
    case 16:
      Letter = 'P';
      break;
    case 17:
      Letter = 'Q';
      break;
    case 18:
      Letter = 'R';
      break;
    case 19:
      Letter = 'S';
      break;
    case 20:
      Letter = 'T';
      break;
    case 21:
      Letter = 'U';
      break;
    case 22:
      Letter = 'V';
      break;
    case 23:
      Letter = 'W';
      break;
    case 24:
      Letter = 'X';
      break;
    case 25:
      Letter = 'Y';
      break;
    case 26:
      Letter = 'Z';
      break;
  }
  return Letter;
}

int main(int argc, char *argv[]){

char password[4];// to save the password
password[4] = '\0';


  for (int a = 1; a <= 26; a++) { // first Letter in the password 

  // bring the Letter
   password[0] = GetLetter(a);

    for (int b= 1; b <= 26; b++) { // Second Letter in the password

    // check the condition 
      if (b == a){
        continue;
      }

    // bring the Letter
    password[1] = GetLetter(b);

      for (int c = 1; c <= 26; c++) { // third Letter in the password

      // check the condition 
      if (c == a){
        continue;
      }

      // check the condition 
      if (c == b){
        continue;
      }

    // bring the Letter
    password[2] = GetLetter(c);

        for (int d = 1; d <= 26; d++) {
          
      // check the condition 
      if (d == a){
        continue;
      }
      // check the condition 
      if (d == b){
        continue;
      }
       // check the condition 
      if (d == c){
        continue;
      }

    // bring the Letterss
    password[3] = GetLetter(d);

    // print the password
    printf("%c%c%c%c\n", password[0],password[1],password[2],password[3]);
        }
      }
    }
  }
}