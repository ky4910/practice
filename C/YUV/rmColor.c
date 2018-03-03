#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removeColor(char *url, int w, int h, int num)
{
	int i = 0;
	int j = 0;

	FILE *fp = fopen(url, "rb+");
	FILE *dst = fopen("output_half.yuv", "wb+");

	unsigned char *pic = (unsigned char *)malloc(w*h*3/2);


	for (i=0; i<num; i++)
	{
		fread(pic, 1, w*h*3/2, fp);
		for (j=0; j<w*h; j++)
		{
			unsigned char temp = pic[j]/2;
			//printf("pic[%d] = %d\n", j, temp);
			pic[j] = temp;
		}
		//memset(pic+w*h, 128, w*h/2);
		fwrite(pic, 1, w*h*3/2, dst);
	}

	free(pic);
	fclose(fp);
	fclose(dst);

	return 0;
}

int main()
{
	printf("half of yuv file!\n");
	removeColor("akiyo(176x144_300frames).yuv", 176, 144, 1);
	printf("done!\n");

	return 0;
}



