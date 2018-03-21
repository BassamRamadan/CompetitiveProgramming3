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
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;

vector<ll>v;
int n, m, k;
void generatt(){
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	int e = 3;
	while (e<n)
	{
		v[e] = (v[e - 1] + v[e - 2]+ v[e - 3] )%m+1;
		e++;
	}
}

int main(){

	Compiler_Beso



		int t, d = 1;
	cin >> t;
	while (t--){
		
		
		cin >> n >> m >> k;
		vector<ll>vv(n);
		v = vv;
		generatt();

		ll l = 0, r = 0, c = 0;
		ll mnR = LLONG_MAX, mnL = 0;
		map<ll, int>mp;
		while (l<n)
		{
			while (r < n && c<k)
			{
				if (mp[v[r]] == 0 && v[r] <= k)
					++c;
				mp[v[r]]++;
				r++;
			}
		//	cout << l << " " << r << " " << c << endl;
			if (c == k)
			{
				if (r - l< mnR - mnL && r-l>=0)
				{
					mnR = r, mnL = l;
				}
			}
			if (mp[v[l]] == 1 && v[l] <= k)
				--c;
			mp[v[l]]--;
			l++;
		}
		cout << "Case " << d++ << ": ";
		if (mnR - mnL== LLONG_MAX)
			cout << "sequence nai" << endl;
		else
			cout << mnR - mnL << endl;
	}
		

		
	return 0;
}