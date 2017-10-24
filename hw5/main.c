/* A program that ask the user to input day, month and year to calculation the age in day */



/* import standard library and getdouble function */

#include <stdio.h>
#include "getdouble.h"

#define ZERO 0	/* define a symbolic constant called ZERO and assign to 0*/

int main(){

 /*  declare and initialize variables */

 int day = ZERO;
 int month = ZERO;
 int year = ZERO;
 int ageInDay = ZERO;
 int todayInDay = ZERO;
 int temp = ZERO;
 int todayMonth = 9;
 int todayDay = 6;
 int todayYear = 2017;
 int front = ZERO;
 int rear = ZERO;

 
 puts("This program will calculate your age in days");   /* output some messages */

 /* ask the user to input month, day and year she/he were born */
 printf("Enter the month you were born: ");
 month = getdouble();
 printf("Enter the day you were born: ");
 day = getdouble();
 printf("Enter the year you were born: ");
 year = getdouble(); 
 printf("Today's date is: %d/%d/%d\n", todayMonth,todayDay,todayYear);
 
 /* calculation */
 
 ageInDay = (int)(year * 365.25) + ((month - 1) * 365.25 / 12.0) + day;
 todayInDay = (int)(todayYear * 365.25) + ((todayMonth - 1) * 365.25 / 12.0) + todayDay;
 temp = todayInDay - ageInDay;
 front = temp/1000;
 rear = temp%1000;
 printf("Your age in days is '%d,%.3d'\n", front,rear); 

 return 0;
}

