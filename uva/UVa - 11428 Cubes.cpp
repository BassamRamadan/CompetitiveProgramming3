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
 
 
		vector<vector<ll>>v(100001);
	for (ll i = 1000; i >= 0; i--)
	{
		for (ll j = 1000; j >= 0; j--)
		{
			ll ans = i*i*i - j*j*j;
			if (ans > 0 && ans<100001)
			{
				if (v[ans].size() != 0){
					if (j < v[ans][1])
					{
						v[ans][0] = i;
						v[ans][1] = j;
					}
				}
				else{
					v[ans].push_back(i);
					v[ans].push_back(j);
				}
			}
		}
	}
	int x;
	while (cin>>x && x)
	{
		if (v[x].size())
			cout << v[x][0] << " " << v[x][1] << endl;
		else
			cout << "No solution\n";
	}
	return 0;
}