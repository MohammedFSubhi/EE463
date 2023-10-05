// Question 7
// Mohammed Faisal Subhi 2035752


#include <stdio.h>
#include <string.h>

struct student {
char name[60];
int grades;
};


int main (int argc, char *argv[]){

struct student st[10];

strcpy(st[0].name,"Mohammed");
st[0].grades = 99; 
strcpy(st[1].name,"Turky");
st[1].grades = 100; 
strcpy(st[2].name,"Moaid");
st[2].grades = 99; 
strcpy(st[3].name,"Ahmed");
st[3].grades = 97; 
strcpy(st[4].name,"Fahad");
st[4].grades = 55; 
strcpy(st[5].name,"Sara");
st[5].grades = 87; 
strcpy(st[6].name,"Khaled");
st[6].grades = 79; 
strcpy(st[7].name,"Sami");
st[7].grades = 81; 
strcpy(st[8].name,"Ragad");
st[8].grades = 99; 
strcpy(st[9].name,"Faris");
st[9].grades = 86; 

printf ("---------------------------------------");
for ( int i = 0; i<10; i++){
printf("\nStudent Name: %s%s%d",st[i].name,"\nStudent grades: ",st[i].grades);
}

printf ("\n---------------------------------------\n");
return 0;

}


