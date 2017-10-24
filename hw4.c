/* A program that ask the user to enter two letters and two numbers,
   and print it out. */


#include<stdio.h>   /*import library to use functions printf and getchar. */
#include "getdouble.h"	 /*import getdouble.c file*/

int main(){

 /*declare variable and initialize variable*/
 char c = 'a';

/*ask for user input, get the character, and display*/
 printf("Please enter a letter: ");
 c = getchar();
 getchar();

  /*
    %c is the format specifier, which outputs in a specific format
    in this case, the ASCII character format 
  */
 printf("The 1st letter is: '%c' \n", c);
 printf("Please enter another letter: ");
 c = getchar();
 getchar();
 printf("The 2nd letter is: '%c' \n", c);

 /*declare variable and initialize variable*/
 double num = 0.0;

 /*ask for user input, get the number, and display*/
 printf("Please	enter a	number: ");
 num = getdouble();

  /*
    %f is the format specifier, which outputs in a specific format
    in this case, floating point format
  */
 printf("The 1st number	is: '%f' \n", num);

 printf("Please enter another number: ");
 num = getdouble(); 
 printf("The 2nd number is: '%f' \n", num);

 return 0;
}
