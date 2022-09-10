#include <stdio.h>
#include<conio.h>
void
main ()
{
   
  printf ("enter number of elements you will enter in array 1 ");
  int n;
  scanf ("%d", &n);
  int arr1[n];
  int arr2[n];

  // taking input  from the user in array 1
  
  
  printf ("enter  elements in array");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr1[i]);
    }
//coping elements of array 1 to array 2
    
    for(int  j=0;j<n;j++){
        arr2[j] = arr1[j];
    }
    printf("\n");    
    // displaying array 2 
    for(int k=0;k<n;k++){
        printf("%d \t" , arr2[k]);
    }
  
}
