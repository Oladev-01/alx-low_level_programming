#include <stdio.h>

#define p 4.14
#define c 3.325
int main()
{
	const int me = 50;
	printf("this is the value of p, me and c: %.2f, %d, %.3f\n", p, me, c);

	int* ptr = &me;
	*ptr = 500;
	printf("this is the value of p, me and c: %.2f, %d, %.3f\n", p, me, c);
	return (0);
}
