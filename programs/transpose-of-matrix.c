#include<stdio.h>
#include<conio.h>

void main(){
    int arr[2][2];
    
    // taking input from user
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("element for array R-> %d C-> %d" , i ,j);
        scanf("%d" , &arr[i][j]);
           
        } }
    
    for(int K=0;K<2;K++){
        for(int l=0;l<2;l++){
            int temp=arr[K][l];
            arr[K][l] = arr[l][K];
            arr[l][K] = temp;
        }
    }


    // printing the  matrix
    for(int p=0;p<2;p++){
        for(int q=0;q<2;q++){
            printf("%d" , arr[p][q]);
        }printf("\n");
    }
  getch();
    }
    
