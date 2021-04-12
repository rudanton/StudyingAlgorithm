#include"main.h"

int in = 0;
int out = 0;
int sum = 0;
int maximum = 0;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> out;
		sum -= out;
		cin >> in;
		sum += in;
		if (sum >= maximum) maximum = sum;
	}
	cout << maximum;
}