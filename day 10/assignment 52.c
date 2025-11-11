#include<stdio.h>
void main(){
    int n,i; 
    printf("put n=");
    scanf("%d",&n);
    int num[n];
    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        printf(" ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]%2==0){
            printf("\n%d is Even no.\n",num[i]);
        }else{
             printf("\n%d is Odd no.\n",num[i]);
        }
    }
}