#include <stdio.h>

struct str{
	int num;
	void (*function)();
};

void display()
{
	printf("display function\n");
}

void hell()
{
	printf("Hello World!\n");
}

int main()
{
	struct str abc = {5, display};
	abc.function();
	return 0;
}


