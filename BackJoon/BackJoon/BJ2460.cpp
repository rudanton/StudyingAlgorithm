#include "BJ2460.h"

void BJ2460::answer()
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
