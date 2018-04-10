#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;
vector<int> adj[MAX];

bool vis[MAX];
bool in_stack[MAX];
bool cycle;

void dfs(int u) {
	if (vis[u] && in_stack[u]) {
		cycle = true;
		return;
	}
	if (vis[u]) return;
	vis[u] = true;
	in_stack[u] = true;
	for (int i = 0; i < adj[u].size(); i++) {
		int ch = adj[u][i];
		dfs(ch);
	}
	in_stack[u] = false;
}

int main() {

	int n, e;
	cin >> n >> e;
	while (e--) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		adj[u].push_back(v);
	}

	for (int i = 0; i < n; i++)
	if (!vis[i])
		dfs(i);

	if (cycle)
		cout << "There is a cycle in the graph" << endl;
	else
		cout << "No cycles" << endl;

	return 0;
}