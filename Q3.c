#include<stdio.h>
int sume(int );
int main()
{
    int n;
    printf("\n Enter your Number=");
    scanf("%d",&n);
    printf("Sum Of Even= %d",sume(n));
    return 0;
}
int sume(int z)
{
    int static e=0;
    if(z<2)
    return 0;
    else
    e=e+z;
    sume(z-2);
    return e;
}