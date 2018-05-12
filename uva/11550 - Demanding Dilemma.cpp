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

int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>>v(n, vector<int>(m));
		vector<int>vv[100000];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> v[i][j];
				if (v[i][j])
					vv[j + 1].push_back(i + 1);
			}
		}


		for (int i = 0; i < m; i++)
		for (int j = 1; j < n; j++)
			v[j][i] += v[j - 1][i];
		bool ok = 1;
		for (int i = 0; i < m; i++)
		if (v[n - 1][i] != 2)
			ok = 0;
		if (ok)
		{
			map<pair<int, int>, int>mp;
			for (int i = 1; ok && i <= m; i++)
			{
				if (mp[{vv[i][0], vv[i][1]}])
					ok = 0;
				mp[{vv[i][0], vv[i][1]}] = 1;
			}
		}

		cout << (ok ? "Yes" : "No") << endl;
	}




	return 0;
}