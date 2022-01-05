#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void bfs(int start) {
	bool chk[1010] = { 0 };
	queue<int> q;

	q.push(start);	//시작점을 큐에 저장
	chk[start] = 1;	//시작점을 방문했다고 표시

	while (q.size()) {
		int cur = q.front();	//큐에 저장되어 있는 정점 중 가장 먼저 저장된 정점을 선택
		q.pop();	//선택 후 제거
		for (int i = 0; i < adj[cur].size(); ++i) {	//해당 정점과 연결된 모든 정점 확인
			int next = adj[cur][i];
			if (!chk[next]) {	//만약 해당 정점을 방문하지 않았다면
				chk[next] = 1;	//해당 정점에 방문했다고 표시를 해준 후
				q.push(next);	//큐에 해당 정점을 저장
			}
		}
	}
}

int main()
{

}