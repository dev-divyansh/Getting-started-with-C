// program to sort the array in ascending order
#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
    int arr[5];
    // taking elements  from the user
    for(int i=0;i<5;i++){
        printf("enter element for index : %d" , i);
        scanf("%d" , &arr[i]);
    }
    // sorting the array in ascending order using bubble  sort technique
    
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    // printing the sorted array
    printf("\nsorted  array \n");
    for(int u=0;u<5;u++){
        printf("%d \t" , arr[u]);
    }
    getch();
}
