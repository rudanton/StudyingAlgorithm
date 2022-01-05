#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int len;
	cin >> len;
	vector<int> vec;
	vector<int>::iterator iter;

	for (int i = 0; i < len;i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	
	int init = vec[0];
	for (int i = 1; i < len; i++)
	{
		init++;
		if (vec[i] != init)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
