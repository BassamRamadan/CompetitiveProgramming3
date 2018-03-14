#include<bits/stdc++.h>
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
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <iterator>
using namespace std;
/*
***
**
*
It is important to start with easy problems,
learn from them,
and work up to harder problems
 
***
**
*
*/
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e6 + 3);
vector<string>a;
int row , col , res ;
int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int dy[] = { -1, -1, -1, 0, 1, 1, 1, 0 };
void flood(int x, int y)
{
	if (x<0 || x >= row || y<0 || y >= col || a[x][y] == '0') return;
 
	res++;
	a[x][y] = '0';
 
	for (int i = 0; i<8; i++) flood(x + dx[i], y + dy[i]);
}
int main()
{
 
	Compiler_Beso
 
 
 
		string s;
	int sp = 0;
	int t;
	cin >> t;
	cin.ignore();
		cin.ignore();
	while (t--)
	{
		a.clear();
		while (getline(cin, s))
		{
			if (s == "") break;
			a.push_back(s);
		}
		row = a.size();
		col = a[0].size();
		int ans = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j <col; j++)
			{
 
				res = 0;
				flood(i, j);
				ans = max(ans, res);
 
			}
		}
		if (sp)
			cout << "\n";
		cout << ans << "\n";
		sp = 1;
 
	}
 
	return 0;
}
 