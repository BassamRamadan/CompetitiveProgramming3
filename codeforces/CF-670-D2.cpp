#include<bits/stdc++.h>
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
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
const ll mod = ll(1e9 + 7);
int a[100002], b[100002];
int n, k;
bool f(ll mid)
{
	ll  need=0;
	for (int i = 0 ; i < n; i++)
	{
		ll cost =a[i] * mid;
		cost -= b[i];
		if (cost>0)
			need += cost;
		if (need>k)return false;
	}
	return (need <= k);
}
int main()
{	
	Compiler_Beso
		
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	ll l = 0, r = 2e9,ans=0;
		while (l<r)
		{
			ll mid = l + (r - l + 1) / 2;
			if (f(mid))
			{
				ans = mid;
				l = mid;
			}
			else
				r = mid - 1;

		}


	cout << ans;



	
	return 0;
}