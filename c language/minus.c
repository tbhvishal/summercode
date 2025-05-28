/// minus

#include <stdio.h>

void sum();
int main()
{
    sum();
}
void sum()
{
    int a, b;
    printf("\n enter two numbers to minus");
    scanf("%d %d", &a, &b);
    printf("the total is %d", a - b);
}