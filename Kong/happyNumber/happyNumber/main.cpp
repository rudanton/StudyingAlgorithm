#include <iostream>
#include <vector>

using namespace std;
vector<int> resultVector;
vector<int>::iterator iter;
inline int square(int a)
{
	return a * a;
}
bool happyNumber(int result);
int compare(int sum)
{
	
	if (resultVector.size() <= 1) happyNumber(sum);
	else
	{
		for(iter = resultVector.begin(); iter!=resultVector.end(); iter++)
		{
			cout << *iter << endl;
			if (sum == *iter) return 0;
		}
	}
	return happyNumber(sum);
}

bool happyNumber(int result)
{
	int compareNum = result;//�񱳿�
	int sqrNum = result;//�޾Ƽ� ������ ��.
	int sum = 0;
	int dec = 1;//�ڸ��� Ȯ�ο�
	while (dec < compareNum)
	{
		sum += square(sqrNum % 10);
		sqrNum = sqrNum / 10;
		dec *= 10;
	}
	resultVector.push_back(sum);
	cout << sum << endl;
	if (sum == 1) return true;
	if (!compare(sum))return false;
	else return true;
}

int main()
{
	int input = 7;


	

}