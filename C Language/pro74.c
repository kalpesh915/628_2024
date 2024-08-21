// C program to showcase the use of
// typecasting
#include <stdio.h>

// Driver Code
int main()
{
	// Given a & b
	int a = 15, b = 2;
	char x = 'a';

	double div;

	// Explicit Typecasting in double
	div = (double)a / b;

	// converting x implicitly to a+3 i.e, a+3 = d
	x = x + 3;

	printf("The result of Implicit typecasting is %c\n", x);

	printf("The result of Explicit typecasting is %f", div);

	return 0;
}
