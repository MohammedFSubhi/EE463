// Guestion 4
//Mohammed Faisal Subhi 2035752


# include <stdio.h>


int main (int argc, char *argv[]){

int M;
printf("Enter the Mounth: ");
scanf("%d",&M);

switch (M) {

case 1:
printf("HIJRI: Muharram \nGREGORIAN: January \n");
break;

case 2:
printf("HIJRI: Safar \nGREGORIAN: February \n");
break;

case 3:
printf("HIJRI: Rabi al-awwal \nGREGORIAN: March \n");
break;

case 4:
printf("HIJRI: Rabi al-thani \nGREGORIAN: April \n");
break;

case 5:
printf("HIJRI: Jumada al-awwa \nGREGORIAN: May \n");
break;

case 6:
printf("HIJRI: Jumada al-thani \nGREGORIAN: June \n");
break;

case 7:
printf("HIJRI: Rajab \nGREGORIAN: July \n");
break;

case 8:
printf("HIJRI: Shaaban \nGREGORIAN: August \n");
break;

case 9:
printf("HIJRI: Ramadan \nGREGORIAN: September \n");
break;

case 10:
printf("HIJRI: shawwal \nGREGORIAN: October \n");
break;

case 11:
printf("HIJRI: Dhu al-Qidah \nGREGORIAN: November \n");
break;

case 12:
printf("HIJRI: Dhu al-hijjah \nGREGORIAN: December \n");
break;
}
return 0;
}
