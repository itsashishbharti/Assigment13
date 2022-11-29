#include<stdio.h>
int sumo(int);
int main()
{
    int n;
    printf("\nEnter your Number=");
    scanf("%d",&n);
    printf("Sum=%d",sumo(n));
    return 0;
}
int sumo(int a)
{
    int static s=0;
    if(a==0)return 0;
    sumo(a-1);
    if(a%2!=0)
    s=s+a;
    return s;

}