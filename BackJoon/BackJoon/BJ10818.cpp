#include "BJ10818.h"

BJ10818::BJ10818()
{
	testCase = 0;
}

BJ10818::~BJ10818()
{
}

vector<int> BJ10818::inputNum(int n)
{
	vector<int> numVec;
	for (int i = 0; i < n; i++)
	{
		cin >> testCase;
		numVec.push_back(testCase);
	}
	return numVec;
}

void BJ10818::FindMm(vector<int> &a)
{
	int min=a[0];
	int max=0;

	for (int i : a)
	{
		if (i <= min)min = i;
		if (i >= max)max = i;
	}
	cout << min << " " << max;
	
}
