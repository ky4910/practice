#include <stdio.h>
#include <stdlib.h>

void decToBin(int num, char *buffer);

int main()
{
    int i = 0;
    int bit_1 = 0, bit_16 = 0;
    int num[16] = {1,0,0,0,  0,1,0,0,  1,1,1,0,  0,0,0,0};
	int number = 0;
	char str[10] = {'\0'};

    for (i = 15; i >= 0; i--)
    {
        bit_1 = num[i];
        if(bit_1 < 0)
        {
            return -1;
        }
        bit_16 += bit_1;
        if (i)
        {
            bit_16 <<= 1;
        }
    }
	
	printf("result is 0x%x\n", bit_16);
	printf("result is %d\n", bit_16);

	decToBin(number, str);

	printf("number %d => %s\n", number, str);
	
	//判断一个数是否为2的幂
	/*
		if (x&(x-1) == 0)
			it is MI of 2
	*/
    return 0;
}

void decToBin(int num, char *buffer)
{
	int i = 0;
	int tmp = 0;

	for (i=7; i>=0; i--)
	{
		tmp = num%2;
		buffer[i] = tmp + '0';
		num /= 2;
	}
}

