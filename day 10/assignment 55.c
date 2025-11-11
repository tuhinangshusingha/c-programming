#include<stdio.h>
void main(){
    int i;
    int A[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        A[4-i]=A[i];
        printf("%d",A[4-i]);

    }
}