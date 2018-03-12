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
#include <bitset>

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);



int main(){


	Compiler_Beso

		int n;
	while (cin>>n && n)
	{
		map<vector<int>, int>mp;
		int mx = 0;
		for (int i = 0; i < n; i++)
		{
			vector<int>v(5);
			for (int j = 0; j < 5; j++)
			{
				cin >> v[j];
			}
			sort(all(v));
			mp[v]++;
			mx = max(mx, mp[v]);
		}
		

		int ans = 0;
		for (map<vector<int>, int>::iterator it = mp.begin(); it != mp.end();it++)
		if (it->second == mx) ans += it->second;
		cout << ans << "\n";
	}
		

		
	return 0;
}