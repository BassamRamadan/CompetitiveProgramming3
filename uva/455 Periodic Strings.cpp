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
	while (t--)
	{
		cin.ignore();
		string s,cur;
		cin >> s;
		int ans = s.size();
		for (int i = 1; i <= s.size(); i++)
		{
			cur = s.substr(0, i);
			if (s.size()%cur.size())
				continue;
			int c = 0;
			for (int j = 0; j < s.size(); j+=cur.size())
			{
				if (cur == s.substr(j, cur.size()))
					++c;
				else
					break;
			}
			if (s.size() / (c*1.) == cur.size())
			{
				ans = cur.size();
				break;
			}
		}
		cout << ans << endl;
		if (t)
			cout << endl;
	}

	return 0;
}