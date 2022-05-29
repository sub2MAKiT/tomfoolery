#include <stdio.h>
#include <stdlib.h>
int main()
{
    int * a = malloc(30);
    for(char * i = a;i == i;i++)
    {
        printf("%c",*i);
    }
    return 0;
}