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
int n, k;
int a[1000000];
int s(int m){
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= m)
			c++;
		else
			break;
	}
	return c;
}
int bin(){
	int l = 1, r = 1e9, m;
	int ans = 1e9 + 2;
	while (l <= r)
	{
		m = (l + r) / 2;
		int c = s(m);
		if (c == k)
		{
			r = m - 1;
			ans = min(ans, m);
		}
		else if (c < k)
			l = m + 1;
		else
			r = m - 1;
	}
	if (ans == 1e9 + 2)
		return -1;
	return ans;
}

int main()
{
	Compiler_Beso

		cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << bin();

	return 0;
}