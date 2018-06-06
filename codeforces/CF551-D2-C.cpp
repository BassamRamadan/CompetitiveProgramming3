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
ll a[100000], b[100000];
int solv(ll md){
	for (int i = 0; i < n; i++){
		b[i] = a[i];
	}
	int sz = n;
	for (int i = 0; i < m; i++){
		ll k = md - sz;
		while (sz>0 && b[sz-1]<=k)
		{
			sz--;
			k -= b[sz];
		}
		if (sz > 0){ b[sz - 1] -= k; };
		while (sz>0 && !b[sz - 1]){ sz--; };
	}
	return sz == 0;
}
int main()
{
	Compiler_Beso


		cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	while (n>0 && !a[n - 1]){ n--; };
	ll l = 0, r = 1e15, m = 0,ans=1e15;
	while (l<=r)
	{
		m = (l + r) / 2;
		if (solv(m))
		{
			ans = min(ans, m);
			r = m-1;
		}
		else
			l = m + 1;
	}
	cout << ans;
	return 0;
}