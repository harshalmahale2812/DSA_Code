#include<stdio.h>
int main()
{
    char a='B';
    char *z = &a;
    *z++;
    printf("%d  \n",a);
    printf("%c ",a);
    
    return 0;
    
}