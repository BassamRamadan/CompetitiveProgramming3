#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;
vector<int> adj[MAX];
vector<int> toplogical_sort;
bool vis[MAX];

void dfs(int u) {
	if (vis[u]) return;
	vis[u] = true;
	for (int i = 0; i < adj[u].size(); i++)
		dfs(adj[u][i]);
	toplogical_sort.push_back(u);
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


	return 0;
}