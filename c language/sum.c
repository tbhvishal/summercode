/// plus

#include <stdio.h>

void sum();
int main()
{
    sum();
}
void sum()
{
    int a, b;
    printf("\n enter two numbers");
    scanf("%d %d", &a, &b);
    printf("the sum is %d", a + b);
}