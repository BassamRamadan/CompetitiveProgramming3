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
int n, a[1000000];
bool solve(int sz)
{
	int div = 0;
	for (int i = 1; i <= n; i++)
	{
		div = a[i] - a[i - 1];
		if (div == sz)
			--sz;
		else
		if (div > sz)
		{
			return 0;
		}
	}
	return 1;
}
int bin()
{
	ll l = 1, r = 1e8,m = 0, ans = 0;
	while (l<=r)
	{
		m = l + (r - l) / 2;
		bool f = solve(m);
		if (f)
		{
			ans = m;
			r = m - 1;
		}
		else
			l = m + 1;
	}
	return ans;
}
int main()
{
	Compiler_Beso
 
 
 
 
	int q;
	cin >> q;
	for (int t = 1; t <= q;t++){
		cin >> n;
		int div = INT_MIN;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
 
		}
 
		int c=bin();
	cout << "Case " << t << ": " << c<< endl;
 
	}
 
	return 0;
}