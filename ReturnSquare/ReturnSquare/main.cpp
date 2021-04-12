#include <iostream>
#include<vector>
using namespace std;

int solution(vector<vector<int>> board)
{
	int h = 0;
	vector<int> v;
	int maxH = 0;
	int maxV = 0;
	int answer = 0;
	for (int i = 0; i < board.size(); i++)
	{
		h = 0;
		for (int j = 0; j < board[i].size(); j++)
		{
			if (i == 0)v.push_back(0);
			if (board[i][j] == 1)
			{
				h++;
				v[j]++;
			}
			if (h > maxH)maxH = h;
			if (board[i][j] == 0)
			{
				h = 0;
				v[j] = 0;
			}
		}

	}
	for (int i : v)
	{
		if (maxV <= i)maxV = i;
	}
	
	if (maxH >= maxV) answer = maxV * maxV;
	else if (maxH <= maxV) answer = maxH * maxH;
	return answer;
}
int main()
{

}