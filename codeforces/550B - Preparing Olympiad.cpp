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


int val[1000000];
int main(){


	Compiler_Beso



		int n, mn, mx, x;
	cin >> n >> mn >> mx >> x;
	for (int i = 0; i < n; i++)
		cin >> val[i];
	sort(val, val + n);
	int sz = 1 << n,ans=0;
	for (int i = 1; i <= sz; i++)
	{
		bitset<20>bt(i);
		int l = INT_MAX, r = INT_MIN,sum=0;
		for (int j = 0; j < bt.size() && j < n; j++)
		{
			if (bt[j] == 1)
			{
				sum += val[j];
				r = max(r, val[j]);
				l = min(l, val[j]);
			}
		}
		if (sum >= mn && sum <= mx && r - l >= x)
			++ans;
	}
	cout << ans;
		
	return 0;
}