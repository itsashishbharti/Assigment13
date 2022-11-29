#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,z;
    printf("\nEnter Your First Number= ");
    scanf("%d",&x);
    printf("\nEnter Your Second Number=");
    scanf("%d",&z);
   printf ("HCF Of %d and %d is %d",x,z,hcf(x,z));
    return 0;
}
int hcf(int a,int b)
{
    if(b!=0)
    return hcf(b,a%b);
    else
    return a;
}