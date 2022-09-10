#include <stdio.h>
#include<conio.h>
void
main ()
{
  clrscr();
  printf ("enter number of elements you will enter in array 1 ");
  int n;
  scanf ("%d", &n);
  int arr[n];
  

  // taking input  from the user in array 1
  
  
  printf ("enter  elements in array");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
    
    // sorting the  array using bubble  sorting algorithm
    for(int l = 0 ;l<n;l++){
    for(int j=0;j<n-1-l;j++) {
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }}
    // printing max  and  min element in the array
    printf(" Min element : %d Max  element : %d" , arr[0] , arr[n-1]);
  getch();
} 
