/*
 * Filename: prog0.c
 * Author: Junru Ren
 * Description: C program for learning basic data types in C for Intro to C 
 *              Workshop by IEEE, HKN, and TBP
 * Date: Jan 17 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  // integer number
  int a = 1;
  int b = 2;

  int add = a + b;
  int sub = a - b;
  int mul = a * b;

  // Notice how %d is related to the data actually got printed out
  // %d is an I/O formatting code designated to represent an integer
  // \n is a special character indicating a new line; try removing it and see 
  // what get printed
  printf("int a = %d\n", a);
  printf("int b = %d\n", b);
  printf("a + b = %d\n", add);
  printf("a - b = %d\n", sub);
  printf("a * b = %d\n", mul);
  // Yes you can even have multiple numbers printed as long as they got lined up
  // after the comma
  printf("We just played around with two integers: a = %d and b = %d\n", a, b);

  // double precision floating point number
  // a.k.a a number with decimal
  double c = 0.1;
  double d = 2.0;
  
  /* TODO 1:
   * Follow the example of int above, try to print out the same info for 
   * double c and double d
   * Notice that the I/O formatting code for a double is %f
   */

  /* Write your code for TODO 1 above this line  */

  // Let's try out more operations!
  double div = c / d;
  int div2 = a / b;
  int div3 = a / d; // What's 1 divided by 2.0?

  /* TODO 2:
   * Uncomment the lines below (delete // in the front);
   * then try fill in the missing parts to make the desired value printed
   */
  //printf("double div = %f\n",);
  //printf("\n", div2);
  //printf("int div3 = %d\n", div3)

  /* Edit your code for TODO 2 above this line */

  /* TODO 3:
   * What's going on with our div3?
   * Isn't it obvious that 1 divided by 2.0 is 0.5??
   * After learning "integer division" and "type casting", try to print out the 
   * value of 0.5 using variable a (1) divided by variable d (2.0)
   * Don't forget to uncomment the lines below
   */

  // printf("Give me that point five! %?\n", );
  /* Write your code for TODO 3 above this line */

  // Let's talk about Logic
  // In the world of logic, it's either true or false.
  // In C, we use type bool (boolean) (or integer 1/0!)
  bool t = true;
  bool f = false;
  int t_int = 1;
  int f_int = 0;

  // In the real world of developing in C, we almost always use integer 1 for 
  // true and integer 0 for false rather than the bool type we use here. And in 
  // fact, there's no formatter for boolean in printf. Instead, we use %d as we 
  // are dealing with an integer. See what gets printed
  /* TODO 4: uncomment this section
  printf("t: %d\nf: %d\n", t, f);

  if (t) { 
    printf("bool t is evaluated as true inside if-condition, which should happen\n");
  }

  if (f) {
    printf("bool f is evaluated as true inside if-condition, which should NOT happen\n");
  }

  if (t_int) { 
    printf("int t_int is evaluated as true inside if-condition, which should happen\n");
  }

  if (f_int) { 
    printf("int f_int is evaluated as true inside if-condition, which should NOT happen\n");
  }
  End of TODO 4*/

  // Great Job! You are donw with this stage of learning!
  // Next: prog1.c for more logics and contrls!

  return EXIT_SUCCESS; // Telling the system that we are done with no problem
}









