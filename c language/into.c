#include <stdio.h>

void sum();
int main()
{
    sum();
}
void sum()
{
    int a, b;
    printf("\n enter two numbers to multiply");
    scanf("%d %d", &a, &b);
    printf("the total multiplication is %d", a * b);
}