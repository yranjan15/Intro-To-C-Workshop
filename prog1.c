/*
 * Filename: prog1.c
 * Author: Junru Ren
 * Description: C program for learning array, logics and controls in C
 * Date: Jan 18 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Arrays
  // Almost all the computer programs need to deal with big chunks of data
  // Array is a built-in data structure in C (also in almost all languages)
  // It looks like this:
  int arr[] = {8, 7, 2, 3, 5};
  // Above is an array of 5 integers; each element is stored in memory next to 
  // each others in the order as you write in the code.
  // Now. let's try to access the first element: 8
  int firstElement = arr[0];
  printf("firstElement =  %d\n", firstElement);
  // You can certainly also do this
  printf("arr[0] = %d\n", arr[0]);
  /* TODO 1: Print the fifth (last element) of arr */

  /* Write your code for TODO 1 above this line */

  // For-Loop
  // Repetition is always essentially needed in programming
  // Our best friend is loop!
  /* TODO: Uncomment the section below to see how a for-loop works
  printf("\n(For-Loop) Printing each element of arr[] in new line:\n");
  int i;
  for ( i = 0; i < 5; i++ )
  {
    printf("%d\n", arr[i]);
  } TODO */

  /* TODO 2: Printing each element in a new line is somehow "ugly". How could 
   * you print them out beautifully in one line? Try to make the program to 
   * print out the following line using for-loop and if-condition
   * arr[] = {8, 7, 2, 3, 5}
   * No hardcoding :P
   */
 
  /* Write yout code for TODO 2 above this line */

  double arr2[] 
  = {4.04, 3.14, 23.333, 0.0, 4.0, 8.5, 4.3, 5.3, 7.77, 38.0, 0.7, 1.20};

  /* TODO 3: Print each elements of arr2 except the first and last element in 
   * a new line
   */

  /* Write your code for TODO 3 above this line */

  // While-Loop
  // In many sense, while-loop is just like for loo, but indeed, they could be 
  // different when given with different tasks to complete
  /* TODO: Uncomment the section below to see how a while-loop works
  printf("\n(While-Loop) Printing each element of arr[] in new line:\n");
  int j = 0;
  while ( j < 5 )
  {
    printf("%d\n", arr[j]);
    j++;
  } TODO*/

  /* TODO 4: Repeat TODO3, using a while loop */
  
  /* Write your code for TODO 4 above this line */

  /* To deal with the problem of repetition/code reusing, we have another tool
   * besides loops, and that is functions!
   * Continue to learn about functions in prog2.c
   */
  return EXIT_SUCCESS;
}
