#include<stdio.h>
void febo(int,int,int,int);
void main(){
    int a=0,b=1,c=0,n;
    printf("put n=");
    scanf("%d",&n);
    if(n>0){
        printf("%d  ",a);
    }
    if(n>1){
        printf("%d  ",b);
    }
    if(n>2){
        febo(a,b,c,n-4);
    }
}
void febo(int n1,int n2,int n3,int n4){
    static int n5=0;
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d  ",n3);
    if(n5<=n4){
        n5++;
    febo(n1,n2,n3,n4);
    }
}