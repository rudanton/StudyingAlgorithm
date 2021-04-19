#include "BJ2908.h"
#include "main.h"

int BJ2908::compare(int a, int b)
{
	int in1 = a;
	int in2 = b;
	while (in1)
	{
		if (in1 % 10 > in2 % 10) return a;
		else if (in1 % 10 < in2 % 10) return b;
		else
		{
			in1 /= 10;
			in2 /= 10;
		}
	}
}

int BJ2908::reverse(int in)
{
	int ans = 0;
	int temp = in;
	for (int i = 100; i > 0; i /= 10)
	{
		ans += i * (temp % 10);
		temp /= 10;
	}
	return ans;
}
