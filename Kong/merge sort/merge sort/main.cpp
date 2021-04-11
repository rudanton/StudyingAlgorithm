#include <iostream>
#include <vector>
#define SIZE 8
int temp[SIZE];

using namespace std;
vector<int> tmp;

void mergeSort(int arr[], int left, int right);


void merge(int arr[], int left, int right)
{
	if (left == right)return;
	int mid;
	mid = (left + right) / 2;
	merge(arr, left, mid);
	merge(arr, mid + 1, right);
	mergeSort(arr, left, right);
}
void mergeSort(int arr[], int left, int right)
{
	int L, R, M, I;
	//���
	M = (left + right) / 2;
	//���ʿ��� ���������� ���� �ε���
	L = left;
	//������ �迭�� �ε���.
	R = M+1;

	//�ӽ÷� ���� ������ �ε���.
	int i = left;


	//���� �ΰ��� �迭 ���ʺ��� ����. �����ʱ���.
	while (L <= M && R <= right)
	{
		//���� �� ������ �ź��� �۴�.
		if (arr[L] <= arr[R])
		{//�ӽ� �迭�� ���ʾָ� �־��ش�.
			temp[i] = arr[L];
			//�� ĭ ����������
			L++;
		}//�ƴϴ�. ������ �� �� �۴�.
		else
		{//�ӽ� �迭�� ������ �ָ� �־��ش�.
			temp[i] = arr[R];
			//��ĭ ����������
			R++;
		}
		//�ӽù迭 �ڸ� �ű�.
		i++;
	}
	//while �������Դ�. -> ������ ���� ��Ҵ�.->�� �� �迭�� �� �Ѿ�Դ�.
	
	//���� �迭�� �� ������ �迭�� ����?
	if (L > M)
	{
		for (int j = R; j <= right; j++)
		{//�׷��� ������ �迭�� ���� ���� �� �ӽù迭�� �־��ش�.
			temp[i] = arr[j];
			i++;
		}
	}
	else
	{//�ƴϴ�. ������ �迭�� �� ����.
		for (int j = L; j <= M; j++)
		{//�׷��� ���� �迭�� �� �־��ش�.
			temp[i] = arr[j];
			i++;
		}
	}
	for (int k = left; k <= right; k++)
	{
		arr[k] = temp[k];
	}
	

}

void vectorSort(vector<int>& vec, int left, int right)
{
		
	for (int i = 0; i < vec.size(); i++)
	{
		tmp.push_back(22);
	}
	tmp.empty();
	int L, R, mid;
	mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	int i = left;

	while (L <= mid && R <= right)
	{
		if (vec[L] <= vec[R])
		{
			//tmp.push_back(vec[L]);
			tmp[i] = vec[L];
			L++;
		}
		else
		{
			//tmp.push_back(vec[R]);
			tmp[i] = vec[R];
			R++;
		}
		i++;
	}
	if (L > mid)
	{
		for (int j = R; j <= right; j++)
		{
			tmp[i] = vec[j];
			//tmp.push_back(vec[j]);
			i++;
		}
	}
	else
	{
		for (int j = L; j <= mid; j++)
		{
			tmp[i] = vec[j];
			//tmp.push_back(vec[j]);
			i++;
		}
	}

	for (int j = left; j <= right; j++)
	{
		vec[j] = tmp[j];
	}
}
void vectorMerge(vector<int>& vec, int left, int right)
{
	if (left == right)return;
	int mid = (left + right) / 2;
	vectorMerge(vec, left, mid);
	vectorMerge(vec, mid + 1, right);
	vectorSort(vec, left, right);
}

int main()
{
	int arr[SIZE] = { 3, 12, 5, 7, 6, 19, 35, 15 };

	merge(arr, 0, SIZE - 1);
	for (int i = 0; i < SIZE ; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	vector<int> vec = { 5, 12, 3, 6, 8, 7, 15, 22, 51, 2, 0, 9, 13 };
	vectorMerge(vec, 0, vec.size() - 1);
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ", ";
	}
	cout << " }" << endl;
}
