#include <stdio.h>

#define FOO(X) do {\
		printf("arg is %d\n", X); \
		printMsg(X); \
		} while(0)

void printMsg(int x);

int main(int argc, char* argv[])
{
	int i = 2;

	/*
	for (i=0; i<5; i++)
		FOO(7);
	*/

	if (i == 1)
		FOO(10)
	else
		FOO(20)


	return 0;
}

void printMsg(int x)
{
	printf("Hello! %d\n", x);
}


