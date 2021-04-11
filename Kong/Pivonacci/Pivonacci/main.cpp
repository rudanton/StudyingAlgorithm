#include <iostream>

using namespace std;

int Fibonacci(int n)
{
	if (n == 0)return 0;
	else if (n == 1) return 1;
	else
	{
		int primary = 0;
		int secondary = 1;

		int result;

		for (int i = 1; i < n; i++)
		{
			result = primary + secondary;
			primary = secondary;
			secondary = result;
		}
		return result;
	}

}

int main()
{

	int input;
	cin >> input;

	cout<<Fibonacci(input);
}
