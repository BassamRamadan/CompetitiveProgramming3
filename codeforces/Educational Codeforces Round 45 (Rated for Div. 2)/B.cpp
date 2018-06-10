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
********** New Challenge .
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



int main()
{
	Compiler_Beso


		ll n, k, c = 0;
	cin >> n >> k;
	vector<ll>v;
	map<int, int>mp, m;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		m[x]++;
		if (mp[x])
			continue;
		mp[x] = 1;
		v.push_back(x);
	}
	sort(all(v));
	reverse(all(v));
	vector<ll>vv = v;
	for (int i = v.size() - 2; i >= 0; i--)
		if (v[i]>v[i + 1] && v[i] <= v[i + 1] + k)
		       v[i + 1] = -1;
		
	
	for (int i = 0; i < v.size(); i++)
		if (v[i] == -1)
			c += m[vv[i]];
	
	if (c)
		cout << n - c;
	else
		cout << n;
	return 0;
}