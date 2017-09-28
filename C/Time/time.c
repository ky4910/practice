#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>

/*
	struct timeb{
		time_t time;			//1970-01-01至今的秒数
		unsigned short millitm;	//千分之一秒即毫秒
		short timezonel;		//为目前时区和Greenwich相差的时间，单位为分钟
		short dstflag;			//为日光节约时间的修正状态，如果为非0代表启用日光节约时间修正
	};
	
	//一般只用到前两个数据
*/

long long getSystemTime()
{
	struct timeb t;
	
	ftime(&t);

	return 1000 * t.time + t.millitm;
}

int main(int argc, char *argv[])
{
	int second = 0;
	int temp = 0;
	long long interval = 0;
	long long t_start, t_end;
	
	if (argc < 2)
	{
		printf("please input the duration!\n");
		return -2;
	}

	t_start = getSystemTime();
	temp = getSystemTime();

	while (1)
	{
		if (second == atoi(argv[1]))
		{
			break;
		}

		t_end = getSystemTime();
		interval = t_end - t_start;
		
		if (interval > 999)
		{
			second++;
			t_start = getSystemTime();
			continue;
		}

		//system("clear");

		if (t_end != temp)
		{
			printf("%d.%.3lld\n", second, interval);
			temp = t_end;

		}
	}

	return 0;
}



