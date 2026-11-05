//small to capital and capital to small
#include<stdio.h>
char small_to_capital(int a){
    if (a>='a'&& a<='z')
    {
    a= a-32;
    }
  else if (a>='A' && a<='Z')
   {
    a= a+32;
   }
   return a;
   
    
    
}
int main()
{
    char a;
    scanf("%c", &a);
    char ans = small_to_capital(a);
    printf("%c", ans);
    return 0;
}