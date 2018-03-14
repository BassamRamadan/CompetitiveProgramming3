#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
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
#include <cctype>
#include <bitset>
using namespace std;
/*
***
**
*
It is important to start with easy problems,
learn from them,
and work up to harder problems
 
***
**
*
*/
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e6 + 3);
vector< vector<int> >v(1001);
int VIS[1000];
int MX;
void dfs(int node)
{
	VIS[node] = 1;
	for (int i = 0; i < v[node].size(); i++)
	{
		if (!VIS[v[node][i]])
			dfs(v[node][i]);
	}
}
int nNodes;
int solve()
{
	int ans = 0;
	for (int i = 0; i < nNodes; i++)
	{
		if (!VIS[i])
		{
			++ans;
			dfs(i);
		}
	}
	return ans;
}
int main()
{
	Compiler_Beso
 
 
 
		int t;
	cin >> t;
	string g;
	while (t--)
	{
 
		char c;
		cin >> c;
		nNodes = c - 'A' + 1;
		cin.ignore();
		while (getline(cin, g) && g != "")
		{	
			v[g[0] - 'A'].push_back(g[1] - 'A');
			v[g[1] - 'A'].push_back(g[0] - 'A');
		}
		cout << solve() << "\n";
		clr(VIS, 0);
		v.clear();
		v.resize(1000);
		if (t)
			cout << endl;
	}
 
	return 0;
}