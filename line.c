#include <stdio.h>

int main()
{   int length;
    printf("enter the length: ");
    scanf("%d", &length);
    printf("+");
    for(int i=0; i<length; i++)
    {
        printf("-");
    }
    printf("+");
    return 0;
}