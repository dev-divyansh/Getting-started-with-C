#include <stdio.h>
#include<conio.h>
void
main ()
{
  clrscr();
    int r=3,c=3;
  int arr[r][c];

  // taking input  from the user in array 
  
  
  printf ("enter  elements in array");
  for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
         scanf("%d" , &arr[i][j]);   
        }
    }
    int sum=0 ;   // for storing the sum of  digonal elements
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            if(k==l){
                sum+=arr[k][l];
            }
        }
    }
    // printing the  sum
    printf(" Sum of  digonal elements  : %d" , sum);
  getch();
} 
