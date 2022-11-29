#include<stdio.h>
int fact(int );
int main()
{
    int n;
    printf("\n Enter your Number=");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
int fact( int f)
{
    if(f==1)return 1;
    return(f*fact(f-1));
}