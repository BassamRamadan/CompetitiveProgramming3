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


int main(){

	Compiler_Beso


		int t;
	cin >> t;
	while (t--)
	{
		
		int n, k;
		cin >> n >> k;
		vector<ll>v(1000005);
		for (int i = 0; i < n; i++)
		{
			int l, r;
			cin >> l >> r;

			v[l]++;
			v[r + 1]--;
		}
		for (int i = 1; i < n; i++)
			v[i] += v[i - 1];
		
		for (int i = 0; i < n; i++)
			v[i] = n - v[i];
		
		ll l = 0, r = 0, c = 0,sum=0,ans=LLONG_MAX;
		while (l<n)
		{
			while (r < n && c < k)
			{
				c++;
				sum += v[r];
				r++;
			}

			if (c == k)
				ans = min(ans, sum);
			sum -= v[l];
			c--;
			l++;
		}
		cout << ans << endl;
	}
		


	return 0;
}