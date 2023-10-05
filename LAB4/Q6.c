// Question 6
// Mohammed Faisal Subhi

#include <stdio.h>

int main(int argc, char argv[]){

int ABC[3];

printf("Enter A: ");
scanf("%d",&ABC[0]);

printf("Enter B: ");
scanf("%d",&ABC[1]);

printf("Enter C: ");
scanf("%d",&ABC[2]);

int AVR = 0;
int MAX = ABC[0];
int MIN = ABC[0];

for (int i = 0; i < 3; i++){
if (MAX < ABC[i]){
MAX = ABC[i];
}
if (MIN > ABC[i]){
MIN = ABC[i];
}
AVR = AVR + ABC[i];

}

printf("\n--------------------------");
printf("\nThe Max: %d",MAX);
printf("\nThe Min: %d",MIN);
printf("\nThe avr: %d",(AVR/3));
printf("\n--------------------------\n");



}
