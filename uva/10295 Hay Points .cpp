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

map<string, int>mp;

int main(){


	Compiler_Beso


		int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		string key;
		int val;
		cin >> key >> val;
		mp[key] = val;
	}
	while (q--)
	{
		string s;
		ll ans = 0;
		while (cin>>s && s[0]!='.'){
			ans += mp[s];
		}
		cout << ans << "\n";
	}
	
		
	return 0;
}