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
char a[100][100];
bool vis[100][100];
map<pair<int, int>, int>mp, Prev;
int n, m; 
bool ok(int i,int j){
	return (i < 0 || i == n || j < 0 || j == m);
}
void inc(int i,int j){
	vis[i][j] = 1;
	for (int k = 0; k < 4; k++){
		int x = dir_r[k] + i;
		int y = dir_c[k] + j;
		if (ok(x, y) || a[x][y]=='.' || vis[x][y])
			continue;
		inc(x, y);
	}
}
int valid(){
	
	clr(vis, 0);
	int c = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (!vis[i][j] && a[i][j]!='.'){
				c++;
				inc(i, j);
			}
		}
	}
	return c;
}

int main()
{
	Compiler_Beso


		
	cin >> n >> m;
	int k = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			if (a[i][j] == '#')
				mp[{i, j}] = 1;
		}
	}
	if (mp.size()<=2)
		return cout<<-1,0;
	int mn = 2;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] == '#'){
				a[i][j] = '.';
				int ans = valid();
				a[i][j] = '#';
				if (ans>1)
					return cout << 1, 0;
			}
		}
	}
		cout << mn;




	return 0;
}