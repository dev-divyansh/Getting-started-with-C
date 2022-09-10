#include <stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    printf("enter number of elements you will enter");
    int n;
    scanf("%d" , &n);
    int arr[n];
    
    // taking input  from the user
    printf("enter  elements in array");
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    printf("original array \n");
    for(int k=0;k<n;k++){
        printf("%d \t" , arr[k]);
    }
    printf("\n reversed  array \n");
    
    //  displaying the array in reverse order
    for(int j=n-1 ;j>=0;j--){
        printf("%d \t" , arr[j]);    
    }
    getch();
}

