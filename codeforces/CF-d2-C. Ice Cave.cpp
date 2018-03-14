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
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
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
int n, m, r1, c1, r2, c2;
char a[1000][1000];
bool VIS[1000][1000];
bool f = 0;
void flood(int i,int j)
{
	if (f) return;
	if (i < 0 || i >= n || j < 0 || j >= m)
		return;
	if (VIS[i][j] && i == r2 && j == c2)
	{
		f = 1;
		cout << "YES";
		return;
	}
	if (VIS[i][j])return;
	VIS[i][j] = 1;
	flood(i, j - 1);
	flood(i, j + 1);
	flood(i - 1, j);
	flood(i + 1, j);
}
int main()
{
	Compiler_Beso

		cin >> n >> m;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j]=='X')
			VIS[i][j] = 1;
		}
	}
	cin >> r1 >> c1;
	cin >> r2 >> c2;
	r1 -= 1;
	c1 -= 1;
	r2 -= 1;
	c2 -= 1;
	VIS[r1][c1] = 0;
	flood(r1, c1);
	if (!f)
		cout << "NO";
 
	return 0;
}