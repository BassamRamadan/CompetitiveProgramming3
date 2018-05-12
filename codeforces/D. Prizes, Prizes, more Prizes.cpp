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
#include <list>
#include <climits>
#include <bitset>

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
ll x[100], acm[6], cnt[5];
int solve(int x){
	bool f = 0;
	for (int j = 0; j < 6; j++)
	{
		if (x&&x <= acm[j])
		{
			f = 1;
			int id = j&&acm[j] != x ? j - 1 : j;
			cnt[id] += x / acm[id];
			x %= acm[id];
		}
	}
	return x;
}
int main(){

	Compiler_Beso

		int n;
	cin >> n;
	acm[5] = 1e9+2;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < 5; i++)
		cin >> acm[i];
	for (int i = 0; i <= n; i++)
	{
		
		if (x[i] >= acm[0])
		{
			x[i] = solve(x[i]);
			i -= 1;
		}
		else
			x[n] += i==n?0:x[i];
	}
	for (int i = 0; i < 5; i++)
		cout << cnt[i] << " ";
	cout << "\n" << x[n];

		
	return 0;
}