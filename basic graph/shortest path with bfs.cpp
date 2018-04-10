#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;

vector<int> adj[MAX];

int main() {

	int n, e;
	cin >> n >> e;
	while (e--) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int s, d;
	cin >> s >> d;
	s--; d--;

	queue<int> qu;
	vector<int> cost(n, INT_MAX);
	vector<int> parent(n, -1);

	qu.push(s);
	cost[s] = 0;
	while (!qu.empty()) {
		int cur = qu.front();
		qu.pop();
		for (int i = 0; i < adj[cur].size(); i++) {
			int ch = adj[cur][i];
			if (cost[ch] == INT_MAX) {
				cost[ch] = cost[cur] + 1;
				parent[ch] = cur;
				qu.push(ch);
			}
		}
	}

	if (cost[d] == INT_MAX)
		cout << -1 << endl;
	else {
		vector<int> path;
		path.push_back(d);
		while (parent[d] != -1) {
			d = parent[d];
			path.push_back(d);
		}
		cout << cost[path[0]] << endl;
		for (int i = path.size() - 1; i >= 0; i--)
			cout << ++path[i] << " ";
		cout << endl;
	}

	return 0;
}