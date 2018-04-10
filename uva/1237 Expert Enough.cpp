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
#define ull unsigned long long int
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define all(v)          ((v).begin()), ((v).end())
#define endl '\n'
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);

int dx[]{-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dy[]{-1, 0, 1, -1, 0, 1, -1, 0, 1};


bool cmp(pair<pair<int, int>, string>a, pair<pair<int, int>, string>b){
	if (a.first.second < b.first.second)
		return 1;
	if (a.first.second == b.first.second && a.first.first < b.first.first)
		return 1;
	return 0;
}
int main(){

	Compiler_Beso


		
		int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		
		vector<pair<pair<int, int>, string>> v;
		for (int i = 0; i < n; i++)
		{
			string s;
			int a, b;
			cin >> s >> a >> b;
			pair<int, int>x;
			if (a>b)
				swap(a, b);
			x.first = a;
			x.second = b;
			v.push_back(make_pair(x, s));
			
		}
		sort(all(v));
		int q;
		cin >> q;
		vector<int>mp(q + 1);
		for (int i = 1; i <= q; i++)
			cin >> mp[i];
		for (int i = 1; i <= q; i++)
		{
			int id = -1, c = 0;;
			for (int j = 0; j < n; j++)
			{
				if (v[j].first.first <= mp[i] && mp[i] <= v[j].first.second)
				{
					++c;
					if (c>1)
					{
						id = -1;
						break;
					}
					id = j;
				}
			}
			if (id == -1)
				cout << "UNDETERMINED\n";
			else
				cout << v[id].second << endl;
		}
		if (t)
		cout << endl;
	}
	return 0;
}