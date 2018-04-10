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
set<int> adj[MX];
int main(){

	Compiler_Beso

		int n,m;
	cin >> n>>m;
	ll sum = 0;
	vector<int>v(MX);
	set<int>s;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		s.insert(v[i]);
	}
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		if (v[x] == v[y])
			continue;
		adj[v[x]].insert(v[y]);
		adj[v[y]].insert(v[x]);
	}
	int mx = -1;
	for (int i = 1; i < MX; i++)
		mx = max(mx,(int) adj[i].size());
	for (int i = 1; i < MX; i++)
	{
		if ((int)adj[i].size() == mx && s.find(i) != s.end())
			return cout << i, 0;
	}
	return 0;
}