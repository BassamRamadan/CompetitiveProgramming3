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
int r, c;
void flood(int x, int y)
{
	if (x<0 || x >= row || y<0 || y >= a[x].size() || a[x][y] =='X'|| a[x][y]=='#') return;
 
	a[x][y] = '#';
 
	flood(x + 1, y);
	flood(x - 1, y);
	flood(x, y + 1);
	flood(x, y - 1);
}
int main()
{
 
	Compiler_Beso
 
 
 
		string s;
	int sp = 0;
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		a.clear();
		bool f = 0;
		while (getline(cin, s))
		{
			if (s.find('_')!=-1) break;
			a.push_back(s);
 
		}
		row = a.size();
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < a[i].size();j++)
			if (a[i][j] == '*')
			{
				flood(i, j);
			}
		}
		for (int i = 0; i < row; i++)
		{
			cout << a[i] << endl;
		}
		cout << s << "\n";
 
	}
 
	return 0;
}
 