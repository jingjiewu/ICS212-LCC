/* This program will output number from range 1-9999 in Chinese */


/* import standard library */
#include <stdio.h>

/* declare char array for one digit number, two digit number, three digit number and four digit number,
   and initialized with some value. */

const char *oneDigit[] = {"","yi","er","san","si","wu","liu","qi","ba","jiu"};
const char *twoDigit[] = {"","yishi","ershi","sanshi","sishi","wushi","liushi","qishi","bashi","jiushi"};
const char *threeDigit[] = {"","yibai","liangbai","sanbai","sibai","wubai","liubai","qibai","babai","jiubai"};
const char *fourDigit[] ={"","yiqian","liangqian","sanqian","siqian","wuqian","liuqian","qiqian","baqian","jiuqian"};

int main() {
    /* display some message */
    puts("This program will count in Chinese from 1 to 9999.");

    /* declare a variable called i */
    int i;    

    /* a for loop to loop through number from 1 to 9999 */
    for( i = 1; i <= 9999; i++){
    int one = i % 10;
    int ten = (i / 10) % 10;
    int hundred = (i / 100) % 10;
    int thousand = (i / 1000) % 10;
        if(i < 10){
           printf("\t %d = %s\n", i, oneDigit[i]);
        }else if(i < 100){
	   printf("\t %d = %s %s\n",i, twoDigit[ten], oneDigit[one]);
	}else if(i < 1000){
	   printf("\t %d = %s %s %s\n",i, threeDigit[hundred], twoDigit[ten], oneDigit[one]);
	}else if(i < 10000){
           printf("\t %d = %s %s %s %s\n",i, fourDigit[thousand], threeDigit[hundred], twoDigit[ten], oneDigit[one]);
        }
   }
    return 0;
}


