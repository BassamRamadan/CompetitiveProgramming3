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
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int n, m;
char a[1000][1000];
vector<pair<char, pair<int, int>>>v;
bool vis[1000][1000];
bool ok(int i,int j){
	return (i >= 0 && i < n && j >= 0 && j < m);
}
void dfs(int i,int j){
	vis[i][j] = 1;
	for (int k = 0; k < 4; k++){
		int x = dir_r[k] + i;
		int y = dir_c[k] + j;
		if (ok(x, y) && a[x][y] == '.' && !vis[x][y]){
			dfs(x, y);
			v.push_back({'D' , {x+1,y+1} });
			v.push_back({ 'R', { x + 1, y + 1 } });
		}
	}
}
int main()
{
	Compiler_Beso

		cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			if (a[i][j] == '.'){
				v.push_back({ 'B', {i+1,j+1} });
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j]=='.' && !vis[i][j]){
				dfs(i, j);
			}
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++){
		cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
	}
	return 0;
}