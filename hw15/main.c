/*
 * import library */


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 36


// declare and initialize a pointer called morse
const char *morse[SIZE] = {
    "0 ----- ",
    "1 .---- ",
    "2 ..--- ",
    "3 ...-- ",
    "4 ....- ",
    "5 ..... ",
    "6 -.... ",
    "7 --... ",
    "8 ---.. ",
    "9 ----. ",
    "a .- ",
    "b -... ",
    "c -.-. ",
    "d -.. ",
    "e . ",
    "f ..-. ",
    "g --. ",
    "h .... ",
    "i .. ",
    "j .--- ",
    "k -.- ",
    "l .-.. ",
    "m -- ",
    "n -. ",
    "o --- ",
    "p .--. ",
    "q --.- ",
    "r .-. ",
    "s ... ",
    "t - ",
    "u ..- ",
    "v ...- ",
    "w .-- ",
    "x -..- ",
    "y -.-- ",
    "z --.. ",
};

int main(int argc, char *argv[]){
    int i, j;
    //error checking
    if(argc < 2){
	puts("ERROR: You only typed the executable. Enter the Morse Code on the commandline.");
    } else {
	// i start with 1 because we need to ignore argc[0] which is ./foo
	for(i = 1; i < argc; i++){
		j = 0;
		while(j < SIZE){

			//declare and initialize two variables, length of code that user input, and length of code for morse
			int codeLen = strlen(morse[j]);
			int argLen = strlen(argv[i]);
				if(codeLen == argLen + 3){
					//searching string for a substring
					char *string = strstr(morse[j], argv[i]);
					//if substring is not empty, system will print out the letter that match morse code
					if(string != NULL){
						printf("%c",morse[j][0]);
						j  = SIZE;
					}
				}
			j++;
		}
	}
	}
 	printf("\n");	
   
	return 0;
}



 
