/* import c standard input/output library */

#include <stdio.h>
/* function prototype */
void addThree(float* );

int main(){
	// declare and initialize a float variable
	float num = 1.234567;
	puts("Here is the value of the variable BEFORE a call-by-reference function call:");
	printf("number = %f\n", num);
	addThree(&num);
	puts("Here is the value of the variable AFTER a call-by-reference function call:");
	printf("number = %f\n", num);	
	printf("\n");		

	//Declare and initialize an array of 5 integers.
	int array[] = {1,2,3,4,5};

	//Declare and intialize an integer pointer with the address of the array
	int *pointer = array;

	//Display 5th element in the array in four different ways
	puts("Here is the 5th element, using array subscript notation with the array name:");
	printf("array[4] = %i\n", array[4]);
	puts("Here is the 5th element, using pointer/offset notation using array name:");
	printf("*(array + 4) = %i\n", *(array + 4));
	puts("Here is the 5th element, using array subscript notation with the pointer:");
	printf("pointer[4] = %i\n", pointer[4]);
	puts("Here is the 5th element, using pointer/offset notation with the pointer:");
	printf("*(pointer + 4) = %i\n", *(pointer + 4));
	printf("\n");
	

	//Display the entire array in four different ways
	int i;
	puts("Here is the whole array, using array subscript notation with the array name:");
	for(i = 0; i < 5; i++){
	printf("%i, ",array[i]);
	}
	printf("\n");

	puts("Here is the whole array, using pointer/offset notation using array name:");
	for(i = 0; i < 5; i++){
        printf("%i, ",*(array + i));
        }
        printf("\n");

	puts("Here is the whole array, using array subscript notation with the pointer:");
	for(i = 0; i < 5; i++){
        printf("%i, ", pointer[i]);
        }
        printf("\n");
	
	puts("Here is the whole array, using pointer/offset notation with the pointer:");
	for(i = 0; i < 5; i++){
        printf("%i, ", *(pointer + i));
        }
        printf("\n");


	//Display the HEXADECIMAL VALUE
	printf("\n");
	puts("Here is the HEXADECIMAL VALUE (using %p) of the addresses of each element of the array:");
	for(i = 0; i < 5; i++){
	printf("&array[%i] = %p\n", i, &array[i]);
	}

	return 0;
}



//call-by-reference function
void addThree(float *variable){
	puts("Making a call-by-reference function call...");
	puts("Here is the value of the parameter DURING a call-by-reference function call, BEFORE changing the value:");
       	printf("number = %f\n", *variable);
	 *variable += 3;
	puts("Making changes now to the parameter...");
        puts("Here is the value of the parameter DURING a call-by-reference function call, AFTER changing the value:");
	printf("number = %f\n", *variable);
}
