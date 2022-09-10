#include <stdio.h>
#include<conio.h>
void
main ()
{
  printf ("enter number of elements you will enter");
  int n;
  scanf ("%d", &n);
  int arr[n];

  // taking input  from the user
  printf ("enter  elements in array");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }

  // calculating sum of elements 
  int sum = 0;
  for (int j = 0; j < n; j++)
    {
      sum += arr[j];
    }

  // printing the  value of  sum
  printf ("Sum = %d", sum);
}

