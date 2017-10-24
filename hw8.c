/* import standard input and output library and math function library */


#include <stdio.h>
#include <math.h>

int main(){
  /*declare and initialize variable*/
 
  int investment = 3000;
  int year = 30;
  int total = 0;

  
  /* calculate my total after 30 years*/
  total = investment * pow((1 + (.05 / 1)), year);
  printf("I put $%i dollars into your account.\n", investment);
  printf("My investment would increase by $%i dollars after %i years.\n", total, year);
  
  /*calculate the square root of my total*/
  double newTotal = sqrt(total);
  printf("I take the square root of my total, I get %f dollars.\n", newTotal);
  
  /*ceiling of my total*/
  int roundUp = ceil(newTotal);
  printf("I round it to the nearest interge up 1, I get %i dollars.\n", roundUp); 
 
  /* calculate my new total */
  double  finalTotal = roundUp * pow((1 + (.05 /1)), year);
  printf("Then I re-invested under the same condition for %i years, I get %f dollars.\n", year,finalTotal);
  
  /* floor of my new total */
  int roundDown = floor(finalTotal);
  printf("I round it to the nearest interge down 1, I get %i dollars.\n", roundDown);
  
  /* natural logarithm of my new total */
  int tem = log(roundDown);
  printf("The natural logarithm of my total is %i dollars\n", tem);  
}
