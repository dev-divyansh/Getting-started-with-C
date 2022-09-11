
#include<stdio.h>
#include<conio.h>

void main(){
  clrscr();
    int arr[2][2];
    int  arr1[2][2];
    int sum[2][2];  //  new matrix to store the sum
    // taking input from user
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("element for array1 R-> %d C-> %d" , i ,j);
            scanf("%d" , &arr[i][j]);
            printf("element for array2 R-> %d C-> %d" , i ,j);
            scanf("%d" , &arr1[i][j]);
        }
    }
   // calculating out the sum
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
           sum[k][l] = arr[k][l] + arr1[k][l];
        }
    }
    // printing the  matrix
    for(int q=0;q<2;q++){
        for(int a=0;a<2;a++){
            printf("%d" , sum[q][a]);
        }
        printf("\n");
    }
  getch();
}

