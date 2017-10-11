#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 2048
#define PATH(n) "/home/kimber/Desktop/Sample/practice/C/channel"#n"tmp/value"

int read_content(const char *path);
int write_content(const char *path, const char *value);

int main(int argc, char* argv[])
{
	int value = 0;
	char content[MAX_SIZE] = {'\0'};
	
	printf("file content is %d\n", read_content(PATH(2)));

	printf("plz input content: ");
	scanf("%s", content);
	write_content(PATH(2), content);

	return 0;
}

int read_content(const char *path)
{
	int ret = 0;
	FILE *fptr;
	char buf[MAX_SIZE] = {'\0'}, *p;

	if (!(fptr = fopen(path, "r")))
	{
		printf("open file failed!\n");
		return -1;
	}

	p = fgets(buf, MAX_SIZE, fptr);
	fclose(fptr);
	if (!p)
	{
		printf("get file content failed!\n");
		return -2;
	}

	ret = atoi(p);

	return ret;
}

int write_content(const char *path, const char *value)
{
	int ret = 0;
	FILE *fptr;

	if (!(fptr = fopen(path, "w")))
	{
		printf("open file failed!\n");
		return -1;
	}
	
	ret = fputs(value, fptr);
	if (ret < 0)
	{
		printf("write file failed!\n");
		return -2;
	}

	fclose(fptr);
	
	printf("write file ok!\n");

	return 0;
}
	


