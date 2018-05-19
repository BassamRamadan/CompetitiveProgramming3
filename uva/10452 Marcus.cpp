#include<bits/stdc++.h>
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
int n, m; 
string val = "IEHOVA";
char ch[10][10];
bool ok(int i,int j){
	return (i<0 || i==n || j<0 || j==m);
}
bool f, vis[20][20];
void rec(int i,int j,vector<string>v,string s){
	if (ok(i, j) || ( isalpha(ch[i][j]) && val.find(ch[i][j])==-1) || f)
		return;
	if (vis[i][j])
		return;
	if (s != "")
		v.push_back(s);
	vis[i][j] = 1;
	if (ch[i][j] == '#')
	{
		for (int k = 0; k < v.size(); k++)
		{
			if (k)
				cout << " ";
			cout << v[k];
		}
		cout << endl;
		f = 1;
		return;
	}
	for (int k = 1; k < 4; k++)
	{
		string a = (k == 1 ? "forth" : (k == 2 ? "right" : "left"));
		rec(i+dir_r[k],j+dir_c[k],v,a);
	}
}
int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{
		f = 0;
		clr(vis, 0);
		cin >> n >> m;
		pair<int, int>beg;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> ch[i][j];
				if (ch[i][j] == '@')
					beg.first = i, beg.second = j;
			}
		}
		
		vector<string>v;
		rec(beg.first, beg.second, v, "");
	}
		
	
	return 0;
}