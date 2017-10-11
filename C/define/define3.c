#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4096
#define to_string(s) #s
#define mix(x, y, z) x##y##z
#define PATH(n) "/home/kimber/Desktop/Sample/practice/C/data/kim"#n"_store/value"

int main()
{
	FILE *fp;
	int abc = 90;
	char buf[MAX_SIZE] = {'\0'}, *p;

	printf("It is %s\n", to_string(Hello!));
	printf("Value is %d\n", mix(a,b,c));

	fp = fopen(PATH(7), "r");
	if (!fp)
	{
		perror("fopen");
		return -1;
	}

	p = fgets(buf, MAX_SIZE, fp);
	if (!p)
	{
		perror("fgets");
		return -2;
	}
	fclose(fp);

	printf("file content is %d\n", atoi(buf));

	return 0;
}


