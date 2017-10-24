/* This program ask user enter number from 0 to 9, and output the number in Chinese word */


#include <stdio.h>   /* import library */

int main(){

 /* declare a character called number and initialize to 'a' */
 char number ='a';

 
 /* output some message then ask the user enter number from 0-9 */
 puts("This program will display the Chinese word for a number of your choice.");
 printf("Enter a number 0-9: ");
 number = getchar();
 

 /* switch statement to translate number from 0-9 in Chinese word */
 switch(number){
 case '0':
    puts("ling");
    break;
 case '1':
    puts("yi");
    break;
 case '2':
    puts("er");
    break;
 case '3':
    puts("san");
    break;
 case '4':
    puts("si");
    break;
 case '5':
    puts("wu");
    break;
 case '6':
    puts("liu");
    break;
 case '7':
    puts("qi");
    break;
 case '8':
    puts("ba");
    break;
 case '9':
    puts("jiu");
    break;
 default:
    printf("ERROR: '%c' is not a digit in the range 0-9.\n", number);
 }
 return 0;
}
