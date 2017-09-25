#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	struct tm *gmtime(const time_t *timep);
	struct tm{
		int tm_sec;  //代表目前秒数, 正常范围为0-59, 但允许至61 秒
		int tm_min;  //代表目前分数, 范围0-59
		int tm_hour;  //从午夜算起的时数, 范围为0-23
		int tm_mday;  //目前月份的日数, 范围01-31
		int tm_mon;  //代表目前月份, 从一月算起, 范围从0-11
		int tm_year;  //从1900 年算起至今的年数
		int tm_wday;  //一星期的日数, 从星期一算起, 范围为0-6
		int tm_yday;  //从今年1 月1 日算起至今的天数, 范围为0-365
		int tm_isdst;  //日光节约时间的旗标
	};
*/

int main(int argc, char *argv[])
{
	char *wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	time_t timep;
	struct tm *p;

	time(&timep);
	p = gmtime(&timep);

	printf("%d/%d/%d ", (1990+p->tm_year), (1+p->tm_mon), p->tm_mday);
	printf("%s %d:%d:%d\n", wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);

	return 0;
}



