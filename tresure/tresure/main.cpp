#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;




vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer(n);
	vector<int> tmp(n);
	for (int i = 0; i < n; ++i)
	{
		tmp[i] = arr1[i] | arr2[i];
		string tmpStr = "";
		for (int level = 1 << (n - 1); level >= 1; level /= 2)
		{
			tmpStr += tmp[i] / level == 1 ? "#" : " ";
			tmp[i] %= level;
		}
		answer[i] = tmpStr;

	}
	return answer;
}