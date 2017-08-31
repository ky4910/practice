#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 256

int kgetline(char *str)
{
	int i = 0;
	char ch = '\0';

	do{
		ch = getchar();
		
		if (isspace(ch))
		{
			//break;
			continue;
		}

		str[i] = ch;
		i++;
	}while(ch!='\n' && ch!=EOF);

	return 0;
}

int main(void)
{
	char arr[MAX_SIZE] = {'\0'};
	char abc[MAX_SIZE] = {'\0'};

	printf("please input the string: ");
	kgetline(arr);
	printf("result is %s\n", arr);
	
	printf("please input the string: ");
	kgetline(abc);
	printf("result is %s\n", abc);

	return 0;
}



