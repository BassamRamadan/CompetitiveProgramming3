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



int main(){

	Compiler_Beso


		int n, s;
	while (cin>>n>>s)
	{
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		ll mnL = 0, mnR = LLONG_MAX;
		ll l = 0, r = 0,sum=0;
		bool ok = 0;
		while (l<n)
		{
			while (r < n && sum <= s)
			{
				sum += v[r];
				r++;
			}
			if (sum >= s)
			{
				ok = 1;
				if ((r - l - 1) < (mnR - mnL))
					mnR = r, mnL = l;
			}
			sum -= v[l];
			l++;
		}
		
		cout << (ok?mnR - mnL:0) << endl;
	}

		
	return 0;
}