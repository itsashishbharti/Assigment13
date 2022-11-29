#include<stdio.h>
int fab(int);
int main()
{
    int n;
    printf("\nEnter Your Number=");
    scanf("%d",&n);
    fab(n-3);
    return 0;
}
int fab(int a)
{
    int static n1=0,n2=1,r=0;
    //printf("%d %d",n1,n2);
    if( a<1)
     printf("0 1 ");
     else
     fab(a-1);
     r=n1+n2;
     printf("%d ",r);
     n1=n2;
     n2=r;

}