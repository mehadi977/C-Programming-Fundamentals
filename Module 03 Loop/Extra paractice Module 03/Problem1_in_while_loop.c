#include<stdio.h>
int main()
{
int a =0;
int b;
scanf("%d",&b);
int i =1;
while (i<=25)
{
    a=b*i;
    printf(" %d * %d = %d\n",b, i, a);
    i++;
}


    return 0;
}