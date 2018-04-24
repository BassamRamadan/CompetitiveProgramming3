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

		int t;
	cin >> t;
	int v = 1;
	while (t--)
	{
		string s,ans="";
		cin >> s;
		ll N = 0;
		bool f = 0;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				N = f ? 10 * ((int)s[i] - '0') + N : (int)s[i] - '0';
				f = 1;
			}
			else
			while (N--)
			{
				ans =s[i]+ans;
				f = 0;
			}
		}
		cout <<"Case "<<v++<<": "<<ans<< endl;
	}

	return 0;
}