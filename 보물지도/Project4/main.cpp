#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int binary(int a)
{
	int num = a;
	int sum = 0;

	while (num>0)
	{
		int bi = 1;
		int jisu = 0;
		
		while (num >= bi * 2)
		{
			bi *= 2;
			jisu++;
		}
		num -= bi;
		int one = 1;
		for (jisu; jisu > 0; jisu--)
		{
			one *= 10;
		}
		sum += one;
	}
	return sum;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	vector<int> temp(arr1.size());

	for (int i = 0; i < arr1.size(); i++)
	{
		int sum = arr1[i] | arr2[i];
		string temp="";
		for (int j = 1 << (n - 1); j >= 1; j /= 2)
		{
			temp += sum / j == 1 ? '#' : ' ';
			sum %= j;
		}
		answer.push_back(temp);
	}
	

	return answer;
}


int main() 
{
	
	vector<string> cor = solution(6, { 4, 4, 4, 4, 4, 4 }, { 87, 8, 8, 8, 8, 8});
	for (string x : cor)
	{
		cout <<"["<< x <<"]"<< endl;
	}
}