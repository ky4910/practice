#include <stdio.h>
#include <stdlib.h>

#define PATH_SIZE 256
#define CONTENT_SIZE 4096
#define HDD_STATUS(n) "/tmp/define/hdd##n##_status"

int main(void)
{
	FILE *f;
	char *ptr = NULL;
	char path[PATH_SIZE] = {'\0'};
	char buf[CONTENT_SIZE] = {'\0'};

	snprintf(path, PATH_SIZE, "%s", HDD_STATUS(3));
	printf("path is %s\n", path);
	printf("path is %s\n", HDD_STATUS(3));
	
	if (!(f=fopen(path, "r")))
	{
		//printf("Open file error!\n");
		perror("/tmp/define");
		return -1;
	}

	ptr = fgets(buf, CONTENT_SIZE, f);
	if (!ptr)
	{
		printf("Get content error!\n");
		return -2;
	}

	printf("Content is %d\n", atoi(buf));

	//free(ptr);
	fclose(f);

	return 0;
}




