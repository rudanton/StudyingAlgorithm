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
	int bin1;
	int bin2;
	int sum;	
	char code[16];
	for (int i = 0; i < arr1.size(); i++)
	{
		bin1 = arr1[i];
		bin2 = arr2[i];
		sum = bin1 | bin2;
		int bi = 1;
		for (int i = 0; i < n; i++)
		{
			bi *= 2;
		}
		if (sum >= bi)sum = bi - 1;
		sum = binary(sum);
		int jisu = 0;
		int jari = n - 1;
		cout << sum << endl;
		string str;
		
		while(sum)
		{
			if (sum % 10 == 1)
			{
				str.push_back('#');
			}
			else(str.push_back(' '));
			sum *= 0.1f;
		}
		while (str.size() < n)
		{
			str.push_back(' ');
		}
		reverse(str.begin(), str.end());
		answer.push_back(str);
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