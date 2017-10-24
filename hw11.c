/* import library */

#include <stdio.h>

#define SIZE 26

/* function that output some message */

void printInstructions(){
	puts("This program will count the letters of the alphabet.");
	puts("Type several sentences, or use input redirection to input a file.");
	puts("To exit program, enter EOF (end of file) by pressing Crtl-D.");
}

void loopAndCountLetters(char s[], int c[]){
  int i = 0;
  /* keep counting input usless there are no letter */
  while(s[i] != '\0'){
    /*If statement for upper and lower case*/
    if(s[i] >= 'a' && s[i] <= 'z'){
      c[s[i] - 'a']++;
    }else if(s[i] >= 'A' && s[i] <= 'Z'){
      c[s[i] - 'A']++;
    }
    i++;
  }
}


void outputResult(int c[]){
  /* Declare and initialize variables */
  int i = 0;
  /* for loop to loop all the character */
  for(i = 0; i < SIZE; i++){
    printf("%c\t %d\n", i + 'a', c[i]);
  }
}


int main(){
  /*Declare and initialize variables*/
  char s[1], input;
  int i = 0;
  int c[SIZE] = {0};
  /* function call*/
  printInstructions();
  /* get user input*/
  input = getchar();
  while(input != EOF){
    input = getchar();
    s[i] = input;
    loopAndCountLetters(s, c);
  }
  printf("The Character counts are: \n");
  outputResult(c);
  return 0;
}
