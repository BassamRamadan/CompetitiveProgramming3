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
vector<vector<int>>v;
bool f[10000],ans;
void dfs(int N){
	f[N] = 1;
	for (int i = 0; i < v[N].size(); i++)
	{
		if (!f[v[N][i]])
			dfs(v[N][i]),ans++;
	}
}

int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{
		int acorn = 0,tree=0;
		clr(f, 0);
		string s;
		vector<vector<int>>vv(27);
		while (cin>>s && s[0]!=' ' && s[0]!='*')
		{
			vv[s[1] - 'A'].push_back(s[3] - 'A');
			vv[s[3] - 'A'].push_back(s[1] - 'A');
		}
		v = vv;
		cin >> s;
		for (int i = 0; i < s.size(); i += 2)
		{
			if (!f[s[i] - 'A'])
			{
				ans = 0;
				dfs(s[i] - 'A');
				if (ans == 0)
					acorn++;
				else
					++tree;
			}
		}
		cout << "There are " << tree << " tree(s) and " << acorn << " acorn(s)." << endl;
	}
	return 0;
}