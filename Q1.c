#include<stdio.h>
int sumn(int);
int main()
{
    int n;
    printf("\nEnter Your Number= " );
    scanf("%d",&n);
    printf("Sum=%d",sumn(n));
    return 0;
}
int sumn(int a)
{
    int static g=0;
    if(a==0)
    return 0;
    else
    sumn(a-1);
    g=g+a;
    return g;
}