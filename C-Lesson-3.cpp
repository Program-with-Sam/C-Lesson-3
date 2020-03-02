#include<stdio.h>

int add(int a, int b) 
{
	return a + b;
}

int multiply(int a, int b)
{
	return (a * b);
}

int fib(int i)
{
	if (i == 0) {
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else {
		return fib(i - 1) + fib(i - 2);
	}
}

int factorial(int i) {
	if (i <= 1) {
		return 1;
	}
	return i * factorial(i - 1);
}
int main()
{
	int c = multiply(2, 5);
	printf("Number is %d", c);

	for (int i = 0; i < 25; i++) {
		printf("\n%d", fib(i));
	}

	printf("\n9! = %d", factorial(9));
}




