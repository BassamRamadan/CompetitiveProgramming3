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
		int p,x,r=0;
		cin >> p;
		cin.ignore();
		vector<pair<int,int> >v(p);
		for (int i = 0; i < p; i++)
		{
			string s;
			getline(cin, s);
			stringstream ss;
			ss << s;
			set<int>st;
			
			while (ss >> x)
				st.insert(x);
			
			v[r].first = st.size();
			v[r].second = r + 1;
			r++;
		}
		sort(all(v));
		bool f = 0;
		int ans = v[0].first;
		for (int i = 0; i < p; i++)
		{
			if (ans == v[i].first)
			{
				if (f)
					cout << " ";
				cout << v[i].second;
				f = 1;
			}
			else break;
		}
		cout << endl;
	}
		
	return 0;
}