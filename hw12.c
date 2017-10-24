/* import standard input/output library */


#include <stdio.h>   


int main(){
	
	/* Declare and initialize 3 variables */

	char variable1 = 'a';
	int variable2 = 1;
	double variable3 = 1.0;

	/* Declare and initialize 3 pointers */

	char *pointer1 = &variable1;
	int *pointer2 = &variable2;
	double *pointer3 = &variable3;
	
	/* output the HEXADECIMAL VALUE of the address of the 3 variables */	
	
	puts("Here are the address of the 3 variables which are stored in the 3 pointers:");
	printf("address of pointer #1 = %p\n", &pointer1);
	printf("address of pointer #2 = %p\n", &pointer2);
	printf("address of pointer #3 = %p\n", &pointer3);
	printf("\n");

	/* output the values of the 3 variables by dereferencing the pointer */

	puts("Here are the values of the 3 variables using the 3 dereferenced pointers:");
	printf("dereferenced of pointer #1 = %c\n", *pointer1);
        printf("dereferenced of pointer #2 = %d\n", *pointer2);
        printf("dereferenced of pointer #3 = %f\n", *pointer3);
	
	puts("\nNow my program is adding 3 to the 3 dereferenced pointers...\n");

	/* add 3 (three) to the values of the 3 variables by dereferencing the pointers */

	*pointer1 += 3;
	*pointer2 += 3;
	*pointer3 += 3;

	/* Using pointers, output the values of the 3 variables by dereferencing the pointer. */

	puts("Here are the updated values of the 3 variables using the 3 dereferenced pointers:");
	printf("dereferenced of pointer #1 = %c\n", *pointer1);
        printf("dereferenced of pointer #2 = %d\n", *pointer2);
        printf("dereferenced of pointer #3 = %f\n", *pointer3);
	printf("\n");

	/* Now output the three variables */

	puts("Here are the updated values of the 3 variables:");
	printf("character variable = %c\n", *pointer1);
        printf("integer variable  = %i\n", *pointer2);
        printf("decimal varibale = %f\n", *pointer3);

	return 0;
}
