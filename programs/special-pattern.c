/*
Printing this pattern
      1
     2  3
    4  5  6
   7  8 9  10
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=4;j>=1+i;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            ;
            if(k%2==0){
                printf(" ");
            }else{
                
                printf("%d" , count);
                ++count;
            }
        }
        printf("\n");
    }
    getch();
}

