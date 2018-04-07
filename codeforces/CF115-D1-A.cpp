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

vector< vector<int> >v;
vector<int>cost(100000);
int n;
int sol(){
	int ans = 0, id;
	
	queue<int>q;
	vector<bool>parent(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		if (parent[i] || !v[i].size())continue;

		cost[i] = 1;
		q.push(i);
		vector<bool>vis(n + 1, 0);
		


		while (!q.empty())
		{
			
			int cur = q.front();
			q.pop();
			vis[cur] = 1;
			parent[cur] = 1;
			if (v[cur].size() == 0)
				ans = max(ans, cost[cur]);
			for (int j = 0; j < v[cur].size(); j++)
			{
				if (!vis[v[cur][j]])
				{
					q.push(v[cur][j]);
					cost[v[cur][j]] = cost[cur] + 1;
				}
			}
		}
		
	}
	return ans;
}
int main(){

	Compiler_Beso

	
		cin >> n;
		vector< vector<int> >vv(n + 1);
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x!=-1)
			vv[x].push_back(i+1);
		}
		v = vv;

		int oo= sol();
		cout << max(oo, 1);

	return 0;
}