
#include <stdio.h>

void sum();
int main()
{
    sum();
}
void sum()
{
    int a, b;
    printf("\n enter two numbers to devide");
    scanf("%d %d", &a, &b);
    printf("the total devide is %d", a / b);
}
