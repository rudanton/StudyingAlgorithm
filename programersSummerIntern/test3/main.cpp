#include <string>
#include <vector>

using namespace std;

vector<int> solution(string line) {
	vector<vector<char>> qwerty =
	{ {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
		{'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'} };

	int lm = 0;
	int rm = 10;
	int lineNum = 0;

	char lp = 'Q';
	char rp = 'P';
	vector<int> answer = vector<int>();

	for (int i = 0; i < line.size(); i++) {
		//printf("%c 의 아스키는 %d\n", line[i], line[i]);
		
		if ({
			lineNum = 0;
			lm = 0;
			rm = 9;
			for (int j = 0; j < qwerty[0].size(); j++)
			{
				if (line[i] == qwerty[0][j]) {

					printf("%c : 왼손 : %d \t 오른손 : %d\n", line[i], lm+1, rm+1);
					if (lm > rm) answer.push_back(1);
					else answer.push_back(0);
				}
				else {
					lm++;
					rm = 9 - lm;
					//printf("%c, ", line[i]);
				}
			}
		}
		else {
			lineNum = 1;
			lm = 0;
			rm = 9;
			for (int j = 0; j < qwerty[1].size(); j++)
			{
				
				if (line[i] == qwerty[1][j]) {
				printf("%c : 왼손 : %d \t 오른손 : %d\n", line[i], lm, rm);
				if (lm > rm) answer.push_back(1);
				else answer.push_back(0);
				}
				else {
					lm++;
					rm = 9 - lm;
					//printf("%c, ", line[i]);
				}
				
			}
		}

	}
	
	return answer;
}
int main() {
	solution("158QOYPI");
}