/* import c standard library */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* function prototype */

void rock();
void paper();
void scissors();

int main(){

 /* declare and initialize variables */
 
 char input = 'a';
 int wins = 0;
 int loses = 0;
 int ties = 0;
 
 /* display message */

 puts("Welcome to the rock-paper-scissors game!");
 puts("To quit the game, press Ctrl-D");

 /* while loop to keep the program running until user hit EOF */ 

 while(input != EOF){
   printf("Enter 'r', 'p', or 's' for rock, paper, or scissors:");
   input = getchar();
   getchar();
   switch(input){
   case 'r':
	rock();
	break;
   case 'p':
	paper();
	break;
   case 's':
	scissors();
	break;
   case EOF:
	printf("^D");
	break;
   default:
	puts("USER INPUT ERROR");
	break;
   }
    printf("\n");
    srand(time(NULL));
    int pick = (1 + rand() % 3); 

 /* calculate the scores */
 
    if(input == 'r' && pick == 3 || input == 'p' && pick == 1 || input == 's' && pick == 2){
      wins++;
    }else if(input == 'r' && pick == 2 || input == 'p' && pick == 3 || input == 's' && pick == 1){
      loses++;
    }else if(input == 'r' && pick == 1 || input == 'p' && pick == 2 || input == 's' && pick == 3){
      ties++;
    }
  }
 
  printf("\n");
  printf("User Wins\t Computer Wins \t Ties \n");
  printf("\t%d\t\t     %d\t    %d\n",wins,loses,ties);
 return 0;
}

/* rock function, this function will randomly pick number 1 to 3, where 1 is rock, 2 is paper and 3 is scissors */

void rock(){
  srand(time(NULL));
  int pick = (1 + rand() % 3);
  if(pick == 1){
    puts("two rocks, so it's a tie!");
  }else if(pick == 2){
    puts("rock vs. paper, so COMPUTER wins!");
  }else if(pick == 3){
    puts("rock vs. scissors, so USER wins!");
  }
}

/* paper function, this function will randomly pick number 1 to 3, where 1 is rock, 2 is paper and 3 is scissors */


void paper(){
  srand(time(NULL));
  int pick = (1 + rand() % 3);
  if(pick == 1){
     puts("paper vs. rock, so USER wins!");
  }else if(pick == 2){
     puts("two paper, so it's a tie!");
  }else if(pick == 3){
     puts("paper vs. scissors, so COMPUTER wins!");
  }
}

/* scissors function, this function will randomly pick number 1 to 3, where 1 is rock, 2 is paper and 3 is scissors */


void scissors(){
  srand(time(NULL));
  int pick = (1 + rand() % 3);
  if(pick == 1){
     puts("scissors vs. rock, so COMPUTER wins!");
  }else if(pick == 2){
     puts("scissors vs. paper, so USER wins!");
  }else if(pick == 3){
     puts("two scissors, so it's a tie!");
  }
}
