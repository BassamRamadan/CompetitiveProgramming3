//#include<bits/stdc++.h>
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
#include <list>
#include <climits>
#include <bitset>

/*

***** Not easy to be successful , Don't give up

*/

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
const int MX = 1e5 + 5;
vector<vector<int>>v(MX),ans,in2,in3(MX);
vector<int>dfs_num(MX), dfs_low(MX),in1(MX);
bool vis[MX];
stack<int>st;
int n, m, cnt, op;
void SCC(int node){
	dfs_num[node] = dfs_low[node] = cnt++;
	st.push(node);
	vis[node] = 1;
	for (int w : v[node]){
		if (!dfs_num[w]){
			SCC(w);
		}
		if (vis[w])
			dfs_low[node] = min(dfs_low[w], dfs_low[node]);
	}
	if (dfs_num[node] == dfs_low[node]){
		int tp = -1;
		ans.push_back(vector<int>());
		while (1)
		{
			tp = st.top();
			ans.back().push_back(tp);
			vis[tp] = 0;
			st.pop();
			if (tp == node)
				break;
		}
	}
}

int main()
{
	Compiler_Beso

		int e = 1;
	while (cin>>n>>m &&(n||m))
	{

		int u = 1;
		dfs_num = dfs_low = in1;
		ans = in2;
		v = in3;

		map<string, int>mp;
		map<int,string>mp2;
		for (int i = 0; i < m; i++){
			string a, b;
			cin >> a >> b;
			int x = (mp[a] ? mp[a] : mp[a] = u++);
			int y = (mp[b] ? mp[b] : mp[b] = u++);
			mp2[x] = a; mp2[y] = b;
			v[x].push_back(y);
		}
		for (int i = 1; i <= n; i++){
			if (!dfs_num[i]){
				cnt = 1;
				SCC(i);
			}
		}
		if (e != 1)
			cout << endl;
		cout << "Calling circles for data set " << e++ << ":" << endl;
		for (int i = 0; i < ans.size(); i++){
			for (int j = 0; j < ans[i].size(); j++){
				if (j == ans[i].size() - 1)
					cout << mp2[ans[i][j]] << endl;
				else
					cout << mp2[ans[i][j]] << ", ";
			}
		}
	}
	
	return 0;
}