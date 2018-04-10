#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;
vector<int> adj[MAX];

bool vis[MAX];
bool cycle;

void dfs(int u, int p) {
	if (vis[u]) {
		cycle = true;
		return;
	}
	vis[u] = true;
	for (int i = 0; i < adj[u].size(); i++) {
		int ch = adj[u][i];
		if (ch != p)
			dfs(ch, u);
	}
}

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

	for (int i = 0; i < n; i++)
	if (!vis[i])
		dfs(i, -1);

	if (cycle)
		cout << "There is a cycle in the graph" << endl;
	else
		cout << "No cycles" << endl;

	return 0;
}