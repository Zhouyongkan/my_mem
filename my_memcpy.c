#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dst, const void* src, size_t num)
{
	assert(src && dst);
	const char* byte_src = (char*)src;
	char* byte_dst = (char*)dst;

	for (size_t i = 0; i < num; ++i)
	{
	byte_dst[i] = byte_src[i];
	}

	while (num--)
	{
		*byte_dst++ = *byte_src++;
	}

	return dst;
}
int main()
{
	int a1[5] = { 1, 2, 3, 4, 5 };
	int a2[5];
	my_memcpy(a2, a1, sizeof(int)* 5);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a2[i]);
	}
	double a3[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double a4[5];
	my_memcpy(a4, a3, sizeof(double)* 5);
	int j = 0;
	for (j = 0; j < 5; j++)
	{
		printf("%f ", a4[j]);
	}
	return 0;
}

