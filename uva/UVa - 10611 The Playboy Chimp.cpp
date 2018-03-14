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
int n, a[100000];
int binR(int i)
{
	int l = 0, r = n, m = 0, ans = INT_MAX;
	while (l<=r)
	{
		m = l + (r - l) / 2;
		if (a[m]>i)
		{
			ans = min(ans, a[m]);
			r = m - 1;
		}
		else
			l = m + 1;
	}
	return (ans == INT_MAX?-1:ans);
}
int binL(int i)
{
	int l = 0, r = n, m = 0, ans = INT_MIN;
	while (l<=r)
	{
		m = l + (r - l) / 2;
		if (a[m]<i)
		{
			ans = max(ans, a[m]);
			l = m + 1;
 
		}
		else
		{
			r = m - 1;
		}
	}
	return (ans == INT_MIN ? -1 : ans);
}
int main()
{
	Compiler_Beso
 
 
 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int q;
	cin >> q;
	while (q--)
	{
		int x;
		cin >> x;
		int ans = binL(x);
		if (ans!=-1)
			cout << ans << " ";
		else
			cout << "X ";
 
		ans = binR(x);
		if (ans != -1)
			cout << ans << "\n";
		else
			cout << "X\n";
 
	}
 
	return 0;
}