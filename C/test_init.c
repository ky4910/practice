/*
 test_init.c
*/

#include <limits.h>
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	/*
    sdk_feature feature;
    feature.version = LIB_RJ45_SDK_VERSION;
    sdk_init(&feature);
    sdk_cleanup();
	*/

    int ret = 0;
    int flag = 0;
    char *ptr = NULL;
    char opt = '\0';
    char path[NAME_MAX] = {'\0'};
    char value[50] = {'\0'};

    while(1)
    {
        printf("\n\n**********     UNIT TEST FOR SYSFS OPERATION     **********\n");
        printf("              (I)nit  (R)ead  (W)rite  (Q)uit              \n");
        printf("\033[1;34;40mInput the command: \033[0m");
        //scanf(" %c", &opt);
		opt = getc(stdin);
        switch(opt)
        {
            case 'I':
                //ret = sysfs_init_sysfs();
                if (ret == 1)
                    printf("Init OK!\n");
                else
                    printf("Init Fail!\n");
                break;

            case 'R':
                memset(path, '\0', sizeof(path));
                printf("Input the path: ");
                scanf("%s", path);
                //ptr = sysfs_read_sysfs_attr(path);
                if(ptr != NULL)
                {
                    printf("Read Ok!\n");
                    printf("Value is %s\n", ptr);
                }
                else
                    printf("Read Fail!\n");
                break;

            case 'W':
                memset(path, '\0', sizeof(path));
                memset(value, '\0', sizeof(value));
                printf("Input the path: ");
                scanf("%s", path);
                printf("Input the value: ");
                scanf("%s", value);
                //ret = sysfs_write_sysfs_attr(path, value);
                if(ret == 0)
                    printf("Write OK!\n");
                else
                    printf("Write Fail!\n");
                break;
                
            case 'Q':
                flag = 1;
                break;

            default :
                printf("Command Error! Again!\n");
                break;
        }
        getchar();
        if (flag == 1)
            break;
    }
    return 0;
}



