/*
 * Filename: prog2.c
 * Author: Junru Ren
 * Description: C program for leaning functions for Intro to C Workshop by IEEE,
 *              HKN, and TBP
 * Date: Jan 21 2017
 */

#include <stdio.h>
#include <stdlib.h>

// Foward Declaration of Functions
int addInt( int a, int b );
// TODO 2: Declare your function here:


int main()
{
  // A function is a group of code that together perform a task
  // main() is a function! And it's a must-have function in every C program.
  // Everytime you run a C program, your computer wounld look for nothing but
  // your main() function.
  // In real life, programers write tons of functions other than main because
  // putting everything simply in main() is not efficient and the code would 
  // look very messy!
  int num1 = 10;
  int num2 = 8;
  // The action of using a function is called "function call"
  // Here we are calling a function implemented below, named addInt
  int sum = addInt( num1, num2 );
  printf( "sum = addInt( num1, num2 ) = %d\n", sum );
  // You can also do the following
  sum = addInt( 10, 8 );
  printf( "sum = addInt( 10, 8 ) = %d\n", sum );
  
  // Look at how addInt() is defined: it takes two Parameters, both should be
  // int type, and it always return an int type.
  // Uncomment the lines below and try to compile the code again.
  // See what do you get? Can you fix it?
  /* TODO 1
  double sum2 = addInt( 11.0, 8 );
  printf( "sum2 = addInt( 11.0, 8 ) = %d\n", sum2 );
  TODO 1*/

  /* TODO 2: Write a function called max() that finds the larger number of two 
   * given integers. When done, uncomment the line below to test your code
   */
  //printf( "max( 10, 8 ) is %d\n", max( 10, 8 ) );
  //printf( "max( 8, 10 ) is %d\n", max( 8, 10 ) );
  //printf( "max( -10, 8 ) is %d\n", max ( -10, 8 ) );

  return EXIT_SUCCESS;
}

// This is an example of a function. It does simple job: adding two integers
int addInt( int a, int b )
{
  int sum = a + b;
  return sum; // Pass the return value back to whoever called this function
}

/* TODO 2: Write your function max() here */



/* Superb! You surely have completed a lot today!!
 * However this is only a beginning of the mighty C Language; please don't 
 * stop and always stay hungry for learning more on your own!
 */
