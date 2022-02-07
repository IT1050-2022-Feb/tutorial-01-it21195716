/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float total, average;

  printf("Enter the mark of 1 subject:-");
  scanf("%d", &mark1);
  printf("Enter the mark of 2 subject:-");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  average = total / 2.0;

  printf("Average of the 2 marks is:-%.2f", average);
    
  return 0;
}

