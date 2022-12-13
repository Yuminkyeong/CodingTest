#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define INF 987654321

//dijkstra 알고리즘, 최단 경로 구하고 두 점은 꼭 지나야 함.

using namespace std;

int n, d[801];
vector<pair<int, int>> node[801];

int solv(int x, int y) {
	for (int i = 1; i <= n; i++)
		d[i] = INF;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, x });
	d[x] = 0;
	while (!pq.empty()) {
		int dist = pq.top().first;
		int curr = pq.top().second;
		pq.pop();
		for (int i = 0; i < node[curr].size(); i++) {
			int ndist = node[curr][i].first;
			int ncurr = node[curr][i].second;
			if (d[ncurr] > dist + ndist) {
				d[ncurr] = dist + ndist;
				pq.push({ d[ncurr], ncurr });
			}
		}
	}
	return d[y];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int e, v1, v2, dist, ans1, ans2;
	cin >> n >> e;

	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		node[a].push_back({ c, b });
		node[b].push_back({ c, a });
	}
	cin >> v1 >> v2;

	if (solv(1, v1) == INF || solv(v1, v2) == INF || solv(v2, n) == INF)
		ans1 = INF;
	else
		ans1 = solv(1, v1) + solv(v1, v2) + solv(v2, n);
	if (solv(1, v2) == INF || solv(v2, v1) == INF || solv(v1, n) == INF)
		ans2 = INF;
	else
		ans2 = solv(1, v2) + solv(v2, v1) + solv(v1, n);

	if (ans1 == INF && ans2 == INF)
		cout << "-1";
	else
		cout << min(ans1, ans2);
}