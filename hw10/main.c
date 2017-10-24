
/* import function getdouble, C standard input and output library and math library */

#include "getdouble.h"
#include <stdio.h>
#include <math.h>


/* function prototype */
void display(int,int);
int add(int,int);
int product(int,int);
int power(int,int);
int GCD(int,int);

int main(){

    /* output some message */
    printf("Enter two positive integers, separated by a space, the first smaller than the second:");
    
    /* ask user to input two possitive number and first one have to smaller than second one */
    int first = (int)getdouble();
    int last = (int)getdouble();

    /* some error check */
    if(first >= last){
	printf("ERROR: %d is not smaller than %d\n",first,last);
    }else if(first < 0 || last < 0){
	printf("ERROR: both numbers must be positive\n");
    }else{
   	printf("Counting from %d to %d: ",first, last);
        
        /* functions call */
	display(first,last);
	int sum = add(first,last);
	printf("\nThe sum of %d to %d = %d\n",first,last,sum);
	int multiply = product(first,last);
	printf("The product of %d to %d = %d\n",first,last,multiply);   
	int pow = power(first,last);
	printf("%d to power of %d = %d\n",first,last,pow);
	int temp = GCD(first,last);
	printf("The GCD of %d and %d = %d\n",first,last,temp);
 }
   return 0;
}

void display(int first, int last){
   if(first <= last){
	printf("%d ", first);
  	display(first + 1, last);
   }
}

int add(int first, int last){
   int result = 0;
   if(first == last){ 
      result = last;
   }  
   else{
	result = first + add(first + 1, last);
   }
    return result;
}

int product(int first, int last){
    int result = 0;
    if(first == last){
	result = last;
    }
    else{
	result = first * product(first + 1, last);
    }
    return result;
}

int power(int first, int last){
   return (int)pow(first,last);
}


int GCD(int first, int last){
    int result = 0;
    if(last == 0){
	return first;
     }
     else{
	return GCD(last, first%last);
     }
}



