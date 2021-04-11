#include <iostream>
#include <string>
#include <vector>


using namespace std;


int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;

	answer = n;
	answer -= lost.size();
	int indexLost = 0;
	int indexReserve = 0;

	while (indexLost != lost.size()-1 || indexReserve != reserve.size()-1)
	{
		if (lost[indexLost] == reserve[indexReserve] ||
			lost[indexLost] == reserve[indexReserve] + 1 ||
			lost[indexLost] == reserve[indexReserve] - 1)
		{
			answer++;
			indexLost++;
			indexReserve++;
			if (indexLost == lost.size() || indexReserve == reserve.size())break;
		}
		else if (lost[indexLost] > reserve[indexReserve] + 1)
		{
			indexReserve++;
			if (indexReserve == reserve.size())break;
		}
		else if (lost[indexLost] < reserve[indexReserve] - 1)
		{
			indexLost++;
			if (indexLost == lost.size())break;
		}

	}


	return answer;
}

int main()
{
	vector<int> lost = { 1, 3, 5 };
	vector<int> reserve = { 2, 4 };
	cout<<solution(5, lost, reserve);

}