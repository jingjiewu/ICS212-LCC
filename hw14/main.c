//load standard library

#include <stdio.h>

//four function prototypes
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(int argc, char *argv[]){
	
	//error checking
	
	if(argc != 4 ){
		printf("ERROR: You have to enter 4 commandline arguments for the calculator.\n");
	}
	else if(argv[1][0] < '0' || argv[1][0] > '9'){
		printf("ERROR: The second commandline argument should be an integer 0-9.\n");
	}
	else if(argv[3][0] < '0' || argv[3][0] > '9'){
		printf("ERROR: The fourth commandline argument should be an integer 0-9.\n");
	}
        else if(argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '.' && argv[2][0] != '/'){
 	        printf("ERROR: The third commandline argument should be a +, -, ., or / operator.\n");
        }
	else{	
	
	//convert characters to integers 0 - 9

	int number1 = argv[1][0] - '0';
        int number2 = argv[3][0] - '0';

	//convert symbol input to integer 0 - 4

        int index = argv[2][0] - '+';
	
	//declare and initialize an array of functions

	int( *array[5]) (int, int) = {add,NULL,sub,mul,div};

	//get the result for the function
	
	int result = array[index](number1, number2);
	
	//get the symbol of 2nd element that user input, so we can user it to output correctly.
	
	char operator = argv[2][0];
	printf("%i %c %i = %i\n",number1,operator,number2,result);
	}
}





//four function definitions

int add(int num1, int  num2){
	return num1 + num2;
}

int sub(int num1, int num2){
	return num1 - num2;
}

int mul(int num1, int num2){
	return num1 * num2;
}

int div(int num1, int num2){
	return num1 / num2;
}

