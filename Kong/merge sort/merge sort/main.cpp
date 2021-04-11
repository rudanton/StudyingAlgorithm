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
	//가운데
	M = (left + right) / 2;
	//왼쪽에서 오른쪽으로 가는 인덱스
	L = left;
	//오른쪽 배열의 인덱스.
	R = M+1;

	//임시로 만든 베열의 인덱스.
	int i = left;


	//양쪽 두개의 배열 왼쪽부터 시작. 오른쪽까지.
	while (L <= M && R <= right)
	{
		//왼쪽 게 오른쪽 거보다 작다.
		if (arr[L] <= arr[R])
		{//임시 배열에 왼쪽애를 넣어준다.
			temp[i] = arr[L];
			//한 칸 오른쪽으로
			L++;
		}//아니다. 오른쪽 게 더 작다.
		else
		{//임시 배열에 오른쪽 애를 넣어준다.
			temp[i] = arr[R];
			//한칸 오른쪽으로
			R++;
		}
		//임시배열 자리 옮김.
		i++;
	}
	//while 빠져나왔다. -> 오른쪽 끝에 닿았다.->한 쪽 배열이 다 넘어왔다.
	
	//왼쪽 배열이 다 오른쪽 배열로 갔다?
	if (L > M)
	{
		for (int j = R; j <= right; j++)
		{//그러면 오른쪽 배열들 아직 남은 거 임시배열에 넣어준다.
			temp[i] = arr[j];
			i++;
		}
	}
	else
	{//아니다. 오른쪽 배열이 다 들어갔다.
		for (int j = L; j <= M; j++)
		{//그러면 왼쪽 배열들 다 넣어준다.
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
