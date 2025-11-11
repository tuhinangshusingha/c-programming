#include <stdio.h>//gcd
void gcd(int n1,int n2, int n3,int n4);

int main() 
{
    int a,b,i=1,r=0;
    printf("put a=");
    scanf("%d",&a);
    printf("put b=");
    scanf("%d",&b);
    gcd(a,b,i,r);
    return 0;
}
void gcd(int n1,int n2, int n3,int n4)
{
    if(n1%n3==0 && n2%n3==0)
    {
        if(n4<n3 && n3<=n1 && n3<=n2)
        {
            n4=n3;
            gcd(n1,n2,(n3+1),n4);
        }
        else
        {
            printf("gcd of %d and %d =%d",n1,n2,n4);
        }
    }
    else if(n3<=n1 && n3<=n2)
    {
        gcd(n1,n2,n3+1,n4);
    }
    else if(n4<n3)
    {
        printf("gcd of %d and %d =%d",n1,n2,n4);
    }
}