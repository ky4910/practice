#include <stdio.h>

void output();

int main(int argc, char *argv[])
{
	output("Para test!");

	return 0;
}

//parameter is none
//if it is void, compile will be fail
//void output(void)
void output(void)
{
	//printf("string is %s\n", str);
	printf("OK!\n");
}


