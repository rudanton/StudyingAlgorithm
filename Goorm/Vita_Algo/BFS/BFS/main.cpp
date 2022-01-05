#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void bfs(int start) {
	bool chk[1010] = { 0 };
	queue<int> q;

	q.push(start);	//�������� ť�� ����
	chk[start] = 1;	//�������� �湮�ߴٰ� ǥ��

	while (q.size()) {
		int cur = q.front();	//ť�� ����Ǿ� �ִ� ���� �� ���� ���� ����� ������ ����
		q.pop();	//���� �� ����
		for (int i = 0; i < adj[cur].size(); ++i) {	//�ش� ������ ����� ��� ���� Ȯ��
			int next = adj[cur][i];
			if (!chk[next]) {	//���� �ش� ������ �湮���� �ʾҴٸ�
				chk[next] = 1;	//�ش� ������ �湮�ߴٰ� ǥ�ø� ���� ��
				q.push(next);	//ť�� �ش� ������ ����
			}
		}
	}
}

int main()
{

}