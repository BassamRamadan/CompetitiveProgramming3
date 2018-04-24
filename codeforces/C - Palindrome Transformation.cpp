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

		int n, k, ans = 0, id = 0;
	string s, g;
	cin >> n >> k >> s;
	k -= 1;
	vector<int>v(n + 1);
	for (int i = 0; i < n - i - 1; i++)
	if (s[i] != s[n - i - 1])
		v[i] = v[n - i - 1] = min(abs(s[i] - s[n - i - 1]), 26 - abs(s[i] - s[n - i - 1]));
	

	int mn = n-1, mx = 0, sum = 0;
	for (int i = 0; i < ceil(n/2); i++)
		sum += v[i];

	if (!sum)
		return cout << 0, 0;
	if (k < ceil(n / 2))
	{
		for (int i = 0; i < ceil(n / 2); i++)
		{
			if (v[i]){
				mn = min(mn, i);
				mx = max(mx, i);
			}
		}
		return cout << min(abs(mx - k), abs(mn - k)) + (mx - mn) + sum,0;
	}
	for (int i = ceil(n / 2); i < n; i++)
	{
		if (v[i]){
			mn = min(mn, i);
			mx = max(mx, i);
		}
	}
	return cout << min(abs(mx - k), abs(mn - k))+ (mx - mn) + sum, 0;

	
	return 0;
}