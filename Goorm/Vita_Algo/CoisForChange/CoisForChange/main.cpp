#include <iostream>


using namespace std;

int main()
{
	int coins[4] = { 500, 100, 50, 10 };
	int change;
	cin >> change;
	cout << change;
	int origin = change;
	int index = 0;
	int AE = 0;

	if (change <= 0)
	{
		cout << 0;
		return 0;
	}
	while (change != 0)
	{
		printf("change : %d", change);
		printf(", AE : %d", AE);
		printf(", index : %d\n", index);
		if (change < 0) 
		{ 
			change = origin; 
			AE = 0; 
			index = 0; 
		}
		if (change < coins[index])
		{
			index++;
		}
		else if (change >= coins[index])
		{
			change -= coins[index];
			AE ++;
		}

		printf("change : %d", change);
		printf(", AE : %d", AE);
		printf(", index : %d\n", index);
	}
	cout << AE;
}
