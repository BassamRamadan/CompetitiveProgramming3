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
vector<vector<int>>adj;
bool vis[10000];
int conect[10001],acm,nn;
set<int>st;
void dfs(int node){

	vis[node] = 1;
	conect[node] = acm;
	for (int i = 0; i < adj[node].size(); i++)
	{
		st.insert(adj[node][i]);
		if (vis[adj[node][i]] == 0)
			dfs(adj[node][i]);
	}
}
int main(){

	Compiler_Beso


		int n;
	while (cin >> n && n){
		vector<vector<int>>ad(n + 1);
		adj = ad;
		string s;
		while (getline(cin, s) && s[0] != '0')
		{
			int up, ch;
			stringstream ss;
			ss << s;
			ss >> up;
			while (ss >> ch && ch)
			{
				adj[up].push_back(ch);
			}
		}
		int x;
		cin >> x;
		while (x--)
		{
			clr(vis, 0);
			int up;
			cin >> up;
			dfs(up);
			vector<int>v;
			int c = 0;
			for (int i = 1; i <= n; i++)
			if (st.find(i) == st.end())
				++c, v.push_back(i);

			cout << c;
			for (auto it : v)
				cout << " " << it;
			cout << endl;
			st.clear();
		}
	}


	return 0;
}