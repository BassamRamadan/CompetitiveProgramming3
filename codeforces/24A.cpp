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
	Not easy to be successful,Dont give up
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
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
bool vis[100000];
vector<vector<int>>v(10000);
int x, y;
map<pair<int, int>, int>m,p;
void dfs(int n){
	vis[n] = 1;
	for (int w : v[n]){
		if (!p[{n, w}]){
			x += m[{n, w}];
			y += m[{w, n}];
			p[{n, w}] = 1;
			p[{w, n}] = 1;
		}
		if (!vis[w]){
			dfs(w);
		}
	}
}
int main(){

	Compiler_Beso

		int n;
	cin >> n;
	
	
	for (int i = 0; i < n; i++){
		int x, y, c;
		cin >> x >> y >> c;
		v[x].push_back(y);
		v[y].push_back(x);
		m[{x, y}] = 0;
		m[{y, x}] = c;
	}
	dfs(1);
	cout << min(x, y);

	return 0;
}