#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void*dst, const void*src, int num)
{
	void *ret = dst;
	assert(dst != NULL);
	assert(src != NULL);

	if (dst < src)
	{
		while (num--)
		{
			*(char*)dst = *(char*)src;
			((char*)dst)++;
			((char*)src)++;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dst + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	my_memmove(arr1, arr1+4,sizeof(int)*4);
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}