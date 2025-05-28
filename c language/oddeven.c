// even or odd no check

#include <stdio.h>

void sum();
int main()
{
	sum();
}
void sum()
{
	int a;
	printf("\n enter a number to check even or odd");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
}
