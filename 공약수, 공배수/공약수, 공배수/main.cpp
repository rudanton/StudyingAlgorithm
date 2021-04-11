#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;

	vector<int> grand1;
	vector<int> grand2;

	int grand = 1;
	int least = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)grand1.push_back(i);
	}
	for (int i = 1; i <= m; i++)if (m%i == 0)grand2.push_back(i);
	for (int i : grand1)
	{
		for (int j : grand2)
		{
			if (i == j && j > grand)grand = j;
		}
	}//최대 공약수.
	answer.push_back(grand);
	
	least = (n*m) / grand;
	answer.push_back(least);



	return answer;
}


int main()
{
	int i = solution(4, 10)[0];
	cout << i;
}
