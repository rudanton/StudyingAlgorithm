#include"main.h"

int solution(string in)
{
	int a = 0;
	vector<int> ans;
	for (int i = 0; i < in.size(); i++)
	{
		a = (int)in[i];
		a -= 65;
		a /= 3;
		a += 3;
		ans.push_back(a);
	}
	a = 0;
	for (int x : ans)
	{
		printf("%d ", x);
		a += x;
	}
	
	return a;
}


int main()
{
	string input;

	cin >> input;
	
	cout <<endl<< solution(input);

}