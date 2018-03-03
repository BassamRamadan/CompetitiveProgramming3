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
#include <cctype>
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
	while (cin >> n && n)
	{
		string s;
		while (n != 0)
		{
			s += char((n % 2) + '0');
			n /= 2;
		}
		ll x = 0, y = 0, t = 1;
		bool f = 0;
		reverse(all(s));
		for (int i = s.size()-1; i >=0; i--)
		{
			if (s[i] == '1'){
				if (f)
				{
					x += t;
				}
				else
				{
					y += t;
				}
				f = !f;
			}
			t += t;
		}
		cout << y << " " << x << endl;
	}

	return 0;

}