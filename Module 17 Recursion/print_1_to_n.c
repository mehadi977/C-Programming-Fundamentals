#include<stdio.h>
void pri(int i)
{
    if (i==12) //condition
    {
        return;
    }
    
    printf("%d\n", i);
    pri(i+2); //increment/decrement
}
int main() 
{
    int i ;
    scanf("%d",&i);
    pri(i); //initialization
    return 0;
}