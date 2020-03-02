#include<stdio.h>

// Declare and Define function
int add(int a, int b) 
{
	return a + b;
}

// Declare and Define function
int multiply(int a, int b)
{
	return (a * b);
}

// Declare and Define Recursive function
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
		// Recursive bit here
		return fib(i - 1) + fib(i - 2);
	}
}

// Declare and Define Recursive function
int factorial(int i) {
	if (i <= 1) {
		return 1;
	}
	// Recursive bit here
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




