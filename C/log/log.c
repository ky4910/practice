#include <stdio.h>
#include <syslog.h>

/*
	execute binary file, there will be a message in
	/var/log/syslog => syslog test by program ./log
*/

int main(int argc, char* argv[])
{
	openlog("zooyo", LOG_CONS | LOG_PID, 0);
	syslog(LOG_INFO, "kimber test by program %s\n", argv[0]);
	closelog();
	return 0;
}

