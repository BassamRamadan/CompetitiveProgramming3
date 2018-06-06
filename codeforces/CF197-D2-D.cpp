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

int n, m;
pair<int, int>start;
char a[1500][1500];
pair<int, int>mp[1500][1500];
bool vis[1500][1500];
int gx(int x){
	return ((x%n) + n) % n;
}
int gy(int y){
	return ((y%m) + m) % m;
}
int dfs(int i,int j){
	int x = gx(i);
	int y = gy(j);
	if (a[x][y] == '#')
		return 0;
	if (vis[x][y]){
		return mp[x][y] != make_pair(i, j);
	}
	vis[x][y] = 1;
	mp[x][y] = make_pair(i, j);
	for (int k = 0; k < 4; k++){
		int r = i + dir_r[k];
		int c = j + dir_c[k];
		if (dfs(r, c))
			return 1;
	}
	return 0;
}
int main()
{
	Compiler_Beso


		cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			if (a[i][j] == 'S')
				start.first = i, start.second = j;
			
		}
	}
	if (dfs(start.first,start.second))
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;

	return 0;
}