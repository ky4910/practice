#include <limits.h>
#include <stdio.h>

#define HAVE_ICONV

#pragma comment(lib, "python27_d.lib")

int main(void)
{
	char path[NAME_MAX] = {'\0'};

	/*
	printf("plz input the path: ");
	scanf("%s", path);
	printf("The input path is %d\n", path);
	*/

#ifdef HAVE_ICONV
	printf("\n\033[1;34;40mHello World!\033[0m\n");
#endif

	printf("How are you!\n");

	return 0;
}



