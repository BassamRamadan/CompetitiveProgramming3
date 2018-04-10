#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <bitset>

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;
const int MX = 2e5;
vector<vector<int> > adj(MX), d(MX);
map<pair<int, int>, int>mp;
bool f[100001];
int mem[100001];
int dfs(int N){
	if (!adj[N].size())
		return 0;
	if (mem[N] != -1)
		return mem[N];
	f[N] = 1;
	int ret = 0;
	for (int i = 0; i < adj[N].size(); i++)
	{
		if (!f[adj[N][i]])
			ret = max( mp[{N, adj[N][i]}] + dfs(adj[N][i]),ret);
	}
	return mem[N]=ret;
}
int main(){

	Compiler_Beso

		int n;
	cin >> n;
	
	ll sum = 0;
	for (int i = 1; i < n; i++)
	{
		int x, y, c;
		cin >> x >> y >> c;
		adj[x].push_back(y);
		mp[{x, y}] = c;
		sum += 2 * c;
	}
	int mx = 0;
	clr(mem, -1);
	for (int i = 1; i <= n; i++)
	{
		clr(f, 0);
		if (!f[i] && adj[i].size())
			mx = max(dfs(i), mx);
	}
	cout << sum - mx;
	return 0;
}