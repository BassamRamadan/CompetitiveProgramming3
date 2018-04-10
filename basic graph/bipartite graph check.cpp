#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

const int MAX = 205;
vector<int> adj[MAX];
int color[MAX];

bool check(int node) {
	color[node] = 0;
	queue<int> qu;
	qu.push(node);
	while (!qu.empty()) {
		int cur = qu.front();
		qu.pop();
		for (auto ch : adj[cur]) {
			if (color[ch] == -1) {
				color[ch] = 1 - color[cur];
				qu.push(ch);
			}
			else if (color[ch] == color[cur])
				return false;
		}
	}
	return true;
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

	bool ok = true;
	memset(color, -1, sizeof color);
	for (int i = 0; i < n && ok; i++) {
		if (color[i] == -1)
			ok &= check(i);
	}

	if (ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}