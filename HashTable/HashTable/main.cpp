#include <iostream>
#include <string>
#include <vector>

#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, int> ansmap;
	map<string, int>::iterator iter;
	
	for (string i : participant)
	{
		ansmap[i]++;
	}
	cout << "\n------------2\n";
	for (iter = ansmap.begin(); iter != ansmap.end(); iter++)
	{
		answer = iter->first;
		cout << iter->first << ",  " << iter->second << endl;
	}
	for (string x : completion)
	{
		ansmap[x]--;
	}
	cout << "\n------------3\n";
	for (iter = ansmap.begin(); iter != ansmap.end(); iter++)
	{
		if(iter->second>0)answer = iter->first;
		cout << iter->first <<",  " << iter->second << endl;
	}
	cout << "\n------------4\n";
	
	return answer;
}
int main()
{
	vector<string> name1 = { "mislav", "stanko", "mislav", "ana" };
	vector<string> name2 = { "stanko", "ana", "mislav" };
	
	
	cout << solution(name1, name2) << endl;
}