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


		int n;
	string s;
	cin >> n >> s;
	set<char>st;
	for (int i = 0; i < n; i++)
		st.insert(s[i]);
	int sz = st.size();

	map<char, int>mp;
	int mnL=0, mnR=INT_MAX;
	int l = 0, r = 0,c=0;
	while (l<n)
	{
		while (r < n && c < sz)
		{
			if (mp[s[r]] == 0)
				c++;
			mp[s[r]]++;
			r++;
		}
		
		if ((r - l-1) < (mnR - mnL) && c == sz)
			mnL = l, mnR = r;
		if (mp[s[l]] == 1)
			c--;
		mp[s[l]]--;
		l++;
	}
	cout << mnR - mnL;
	return 0;
}