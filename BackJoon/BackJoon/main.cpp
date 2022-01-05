#include"main.h"

string solution(vector<int> numbers) {
	string answer = "";
	vector<int> list;
	for (int i : numbers)
	{
		if (i == 0)list.push_back(0);
		while (i)
		{
			list.push_back(i % 10);
			i /= 10;
		}
	}
	sort(list.begin(), list.end());
	reverse(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << ", ";
		char alpha[16];
		_itoa_s(list[i], alpha, 16);
		cout << alpha << endl;
		answer += alpha;
	}
	return answer;
}
int main()
{
	vector<int> test = { 3, 30, 34, 5, 9 };
	string tmp = solution(test);
	cout << endl << tmp;
}