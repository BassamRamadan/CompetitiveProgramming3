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
int n, m;
vector<vector<int>>lang, peo;
vector<bool> vislang(100000), vispeo(100000);
void dfs(int Lan){

	for (int i = 0; i < lang[Lan].size(); i++)
	{
		int cur = lang[Lan][i];
		if (vispeo[cur])
			continue;
		vispeo[cur] = 1;
		for (int j = 0; j < peo[cur].size(); j++)
		{
			int curr = peo[cur][j];
			if (vislang[curr])
				continue;
			vislang[curr] = 1;
			dfs(curr);
		}
	}
}





int main(){

	Compiler_Beso

		
	cin >> n >> m;
	vector<vector<int>>lang1(m + 1);
	vector<vector<int>>peo1(n + 1);
	peo = peo1;
	lang = lang1;
	int ans1 = 0,ans=0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (!x)
			++ans1;
		for (int j = 0; j < x; j++)
		{
			int y;
			cin >> y;
			peo[i + 1].push_back(y);
			lang[y].push_back(i + 1);
		}
	}
	for (int i = 1; i <= m; i++)
	{
		if (!vislang[i] && !lang[i].empty())
		{
			dfs(i);
			++ans;
		}
	}
	ans = max(ans - 1, 0);
	cout << ans1 + ans;

	return 0;
}