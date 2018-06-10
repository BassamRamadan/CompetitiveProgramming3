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
map<int, ll>mi, mj;
ll ans;
void f1(string s){
	int l = 0, r = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ')')
		{
			if (r){
				r--;
				continue;
			}
			l++;
		}
		else
			r++;
	}
	if (l > 0 && r > 0)
		return;
	if (l > 0){
		mi[l]++;
	}
	else if (r > 0){
		mj[r]++;
	}
	else
		mi[0]++;
}

int main()
{
	Compiler_Beso


		int n;
	cin >> n;
	int c = 0;

	while (n--)
	{
		string s;
		cin >> s;
		f1(s);
	}
	for (auto t : mj){
		if (mi[t.first])
			ans += mi[t.first] * t.second;
	}
	mi[0] *= mi[0];
	cout << ans + mi[0];
	return 0;
}