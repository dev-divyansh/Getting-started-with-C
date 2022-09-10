/*  if number of zero elements  in a matrix is more than number of  non-zero elements  then that matrix is  known  as sparsc matrix . */
#include <stdio.h>
#include<conio.h>
void
main ()
{
  clrscr();
    int r,c;
  printf("enter the  number  of rows ");
  scanf ("%d", &r);
  printf("enter the  number of columns");
  scanf("%d" , &c);
  
  int arr[r][c];

  // taking input  from the user in array 
  
  
  printf ("enter  elements in array");
  for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
         scanf("%d" , &arr[i][j]);   
        }
    }
    
    int zeros = 0;
    int non_zeros =0;
    
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            if(arr[k][l] == 0){
                ++zeros;
            }else{
                ++non_zeros;
            }
        }
    }
        // checking  for  sparc matrix
    if(zeros > non_zeros){
        printf("sparc matrix");
    }else{
        printf("not  a  sparc matrix");
    }
  getch();
    
} 
