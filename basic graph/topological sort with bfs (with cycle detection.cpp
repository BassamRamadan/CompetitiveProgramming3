#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;
vector<int> adj[MAX];
int out[MAX];

int main() {

	int n, e;
	cin >> n >> e;
	while (e--) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		out[u]++;
		adj[v].push_back(u);
	}

	queue<int> qu;
	for (int i = 0; i < n; i++)
	if (out[i] == 0)
		qu.push(i);

	vector<int> topological_sort;

	while (!qu.empty()) {
		int cur = qu.front();
		qu.pop();
		topological_sort.push_back(cur);
		for (int i = 0; i < adj[cur].size(); i++) {
			int ch = adj[cur][i];
			out[ch]--;
			if (out[ch] == 0)
				qu.push(ch);
		}
	}

	if (topological_sort.size() != n)
		cout << -1 << endl;
	else {
		for (auto e : topological_sort)
			cout << e << " ";
		cout << endl;
	}


	return 0;
}