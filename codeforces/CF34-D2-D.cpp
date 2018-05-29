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
vector<vector<int>>adj(100001);
vector<bool>v(100001);
vector<int>par(100001);
void dfs(int N){
	v[N] = 1;
	
	for (int w : adj[N]){
		if (!v[w]){
			par[w] = N;
			dfs(w);
		}
	}
}
int main(){

	Compiler_Beso


		int n, f, s;
	cin >> n >> f >> s;
	
	for (int i = 1; i <= n; i++)
	{
		if (i == f)continue;
		int e;
		cin >> e;
		adj[e].push_back(i);
		adj[i].push_back(e);
	}

	dfs(s);
	for (int i = 1; i <= n; i++)
	{
		if (i != s)
			cout << par[i] << " ";
	}
		





	return 0;
}