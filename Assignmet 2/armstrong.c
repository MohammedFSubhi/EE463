// Assignment 2 
// Mohammed Faisal Subhi
// 2035752

#include <stdio.h>

int main(int argc, char *argv[]){
int ArmstrongC = 0;
int NumbersC = 1;
int multiplay;
int result;
int quotient; 
int count =0;
while (ArmstrongC < 20){
     count = 0;
     quotient = NumbersC;
    while (quotient != 0){ 
        quotient = quotient/10;
        count++;
    }
    int cnt = count;
    result = 0;
    multiplay =1;
    quotient = NumbersC;
    while (quotient !=0 ){
        int rem =  quotient%10;
        while (cnt != 0){
            multiplay = multiplay*rem;
            cnt--;
        }
        result = result + multiplay;
        cnt = count;
        quotient = quotient/10;
        multiplay =1;
    }
    if (result == NumbersC){
        printf("Armstrong [ %d %s %d \n", ++ArmstrongC , "]: ",   NumbersC);
    } 
    NumbersC++;
} 
return 0;
}

