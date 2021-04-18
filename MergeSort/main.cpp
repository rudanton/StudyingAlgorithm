#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;


void merge(vector<int> &a, int left, int right)
{
	vector<int> tmp;
	tmp.clear();
	for (int i = 0; i < a.size(); i++)tmp.push_back(0);
	int M = (left + right) /2;
	int L = left;
	int R = M + 1;
	int i = 0;
	while (L <= M && R<=right)
	{
		if (a[L] <= a[R])
		{
			//tmp.push_back(a[L]);
			tmp[i] = a[L];
			L++;
			i++;
		}
		else if (a[L] > a[R])
		{
			//tmp.push_back(a[R]);
			tmp[i] = a[R];
			R++;
			i++;
		}
	}
	
	if (L > M)
	{
		for(int j = R; j<=right;j++)
		{
			//tmp.push_back(a[R]);
			tmp[i] = a[j];
			i++;
		}
	}
	else
	{
		for(int j = L;j<=M;j++)
		{
			//tmp.push_back(a[L]);
			tmp[i] = a[j];
			i++;
			//L++;
		}
	}
	for (int j = left, i=0; j <= right; j++, i++)
	{
		a[j] = tmp[i];
	}
}

void mergeSort(vector<int>& ref, int left, int right)
{
	if (left == right)return;
	int mid = (left + right) * 0.5;

	mergeSort(ref, left, mid);
	mergeSort(ref, mid + 1, right);
	merge(ref, left, right);
}

int main()
{
	srand(time(NULL));

	vector<int> test;
	for (int i = 0; i < 15; i++)
	{
		test.push_back(i + 1);
	}
	for (int i = 0; i < 15; i++)
	{
		int dest = rand() % 15;
		int sour = rand() % 15;
		int temp = test[dest];
		test[dest] = test[sour];
		test[sour] = temp;
	}
	for (int x : test)printf("%d ", x);
	printf("\n");

	mergeSort(test, 0, test.size()-1);
	printf("\n");

	for (int x : test)printf("%d ", x);

}