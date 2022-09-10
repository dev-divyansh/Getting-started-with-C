#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
    int arr[2][2];
    int  arr1[2][2];
    // taking input from user
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("element for array1 R-> %d C-> %d" , i ,j);
            scanf("%d" , &arr[i][j]);
            printf("element for array2 R-> %d C-> %d" , i ,j);
            scanf("%d" , &arr1[i][j]);
        }
    }
    int flag=0;
    // checking for equality
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
           if(arr[k][l] != arr1[k][l]){
               flag=-1;
               break;
           } 
        }
    }
    if(flag!=0){
        printf("not  equal");
        
    }
        else{
            printf("equal");
        }
        getch();
    }
