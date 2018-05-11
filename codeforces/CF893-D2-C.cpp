//#include<bits/stdc++.h>
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
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
const int MX = 100010;
bool vis[MX];
vector<vector<int>>adj(MX);
vector<ll>cost(MX);
ll mx;
int dfs(int nod){
	vis[nod] = 1;
	mx = min(mx, cost[nod]);
	for (int i = 0; i < adj[nod].size(); i++)
	{
		if (!vis[adj[nod][i]])
			dfs(adj[nod][i]);
	}
	return mx;
}
int main(){

	Compiler_Beso

		int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> cost[i + 1];
	
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	ll ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			mx = 1e18;
			ans += dfs(i);
		}
	}

	cout << ans;



		
	return 0;
}