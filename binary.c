#include <stdio.h>

int main()
{
    int i = 0;
    int bit_1 = 0, bit_16 = 0;
    int num[16] = {1,0,0,0,  0,1,0,0,  1,1,1,0,  0,0,0,0};

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

	//判断一个数是否为2的幂
	/*
		if (x&(x-1) == 0)
			it is MI of 2
	*/
    return 0;
}

