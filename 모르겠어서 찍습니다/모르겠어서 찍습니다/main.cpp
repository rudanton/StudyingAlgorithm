#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int score[3] = { 0,0,0 };
	int num2[4] = { 1, 3, 4, 5 };
	int num3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
	for (int i = 0; i < answers.size(); i++)
	{
		//1번애가 찍는 방식
		if (answers[i] % 6 == (i % 5) + 1)score[0]++;
		//2번애가 찍는 방식
		if (i % 2 == 0 && answers[i] == 2) score[1]++;
		else if (i % 2 == 1 && answers[i] == num2[(i/2) % 4]) score[1]++;
		//3번애가 찍는 방식
		if (answers[i] == num3[i % 10]) score[2]++;
	}
	
	vector<int> sc;
	for (int i : score)
	{
		sc.push_back(i);
	}
	sort(sc.begin(), sc.end());
	for (int i = 0; i < 3; i++)
	{
		if (sc[2] == score[i])answer.push_back(i+1);
	}

	sort(answer.begin(), answer.end());
	
	return answer;
}

int main()
{
	vector<int> ans = { 1, 3, 2, 4, 2 };
	for (int i : solution(ans))
	{
		cout << i << ", ";
	}
}

/*
1. 1 2 3 4 5 반복
2. 21 23 24 25 반복
3. 33, 11, 22, 44, 55 반복

*/