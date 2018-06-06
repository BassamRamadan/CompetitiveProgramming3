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
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

int main()
{
	Compiler_Beso

		int n; cin >> n;
	char a;
	string s = "", d;
	for (int i = 0; i < n; i++)
		cin >> a, s += a;
	d = s; int mx = 0, res = 0;
	for (int i = 0; i < n; i++)
	{
		s = d;
		for (int j = i; j < n; j++)
		{
			if (s[j] == '1')
				s[j] = '0';

			else
				s[j] = '1';
			
			int t = count(all(s), '1');
			if (t > res)
				res = t;
		}

	}
	cout << res << endl;
	return 0;
}