#include<stdio.h>
int main ()
{

    int x ,i , h;

    do{
    i=2;
    printf("enter the num\n");
    scanf("&d",&x);
    while(i<x/2)
    {
        if (x==1 || x%i==0)
        {
            printf("not prime\n");
            break;}
    i++;
        }
        if (x%i!=0)
        {
            printf("prime\n");
        }
        printf("do you want to test again? \n 1.yes \n 2.no\n");
        scanf("%d",&h);
        if(h==1)
        {
            continue;
        }
        else(h==2);
        {
            break;
        }}while(1);

    return 0 ;
}
