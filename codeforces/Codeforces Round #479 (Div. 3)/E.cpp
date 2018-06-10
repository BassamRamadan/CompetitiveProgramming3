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
const int MX = 200009;
bool vis[MX];
vector<vector<int>>v(MX);
vector<int>v1, v2;
bool cycle;
void cycleDfs(int node,int par){
	vis[node] = 1;
	v1.push_back(node);
	for (int w : v[node]){
		if (w == par)
			continue;
		if (vis[w])
		{
			cycle = 1;
			continue;
		}
		cycleDfs(w, node);
	}
}
int main()
{
	Compiler_Beso


		int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		if (!vis[i]){
			v1 = v2;
			cycle = 0;
			cycleDfs(i, -1);
			if (!cycle)
				continue;
			bool f = 0;
			for (int k = 0; k < v1.size(); k++){
				if (v[v1[k]].size()>2){
					f = 1;
					break;
				}
			}
			if (!f)
				ans++;
		}
	}
	cout << ans;
	return 0;
}