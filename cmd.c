#include <stdio.h>
#include <stdlib.h>

int get_sensors(int id, int *tmp);

int main(int argc, char *argv[])
{
	int res = 0;
	int para = 0;

	get_sensors(4, &para);

	printf("The sum is %d\n", atoi(argv[1]) + atoi(argv[2]));
	printf("The para is %d\n", para);

	return 0;
}

int get_sensors(int id, int *tmp)
{
	id = 9;
	*tmp = 13;

	return 0;
}


