#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &v, int target)
{
	vector<int> temp;
	temp = { 1, 2 };
	sort(v.begin(), v.end());
	
	int head = 0;
	int tail = v.size() - 1;

	while (head < tail)
	{
		int sum = v[head] + v[tail];
		if (sum < target)
		{
			head++;
			continue;
		}
		if (sum > target)
		{
			tail--;
			continue;
		}

		if (sum == target)
		{
			temp[0] = head;
			temp[1] = tail;
			break;
		}
	}
	return temp;
}

int main()
{
	int input;
	cin >> input;
	
	vector<int> vec;

	for (int i = 0; i < input; i++)
	{
		int num;
		cin >> num;
		vec.emplace_back(num);
	}
	sort(vec.begin(), vec.end());
	cin >> input;
	

	int pair = 0;
	
	int head=0;
	int tail = vec.size() - 1;
	while (head < tail)
	{
		int sum = vec[head] + vec[tail];
		if (sum > input)
		{
			tail--;
			continue;
		}
		if (sum < input) 
		{ 
			head++;
			continue;
		}
		if (sum == input)
		{
			tail--;
			head++;
			pair++;
		}
	}
	
	cout << pair<<endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ", ";
	}
	cout << endl;

	vector<int> A = twoSum(vec, input);
	cout << A[0] << "," << A[1];

}
