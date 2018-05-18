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
char a[1000][1000];
int n, m, q,cnt,ans[1000009];
bool vis[1000][1000];
bool ok(int i,int j){
	return !(i < 0 || i == n || j < 0 || j == m);
}
map<pair<int, int>, int>mp;
int dfs(int i,int j){
	if (!ok(i, j) || vis[i][j])
		return 0;
	if (a[i][j] != '.')
		return 1;
	mp[{i, j}] = cnt;
	int s = 0;
	vis[i][j] = 1;
	for (int k = 0; k < 4; k++)
	{
		int x = i + dir_r[k];
		int y = j + dir_c[k];
		s+=dfs(x, y);
	}
	return s;
}
int main(){

	Compiler_Beso


		
	cin >> n >> m >> q;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
		cin >> a[i][j];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '.')
			{
				if (vis[i][j])
					continue;
				++cnt;
				ans[cnt]=dfs(i, j);
			}
		}
	}
	while (q--)
	{
		int i, j;
		cin >> i >> j;
		--i; --j;
		cout << ans[mp[{i, j}]] << endl;
	}
	return 0;
}