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
int a[10000];
int mn = -1;
int n, k, e = 0;
set<vector<int> >vv;
void rec(int i, int sum, vector<int>v){
	if (i == n)
	{
		if (sum == k)
		{
			vv.insert(v);
		}
		return;
	}
	if (sum == k)
	{
		vv.insert(v);
	}
	if (sum < k){
		rec(i + 1, sum, v);
		v.push_back(a[i]);
		rec(i + 1, sum + a[i], v);

		
	}
	else
		return;
}

int main(){

	Compiler_Beso

	while (cin >> k >> n && (n||k)){

		mn = -1;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a,a+n);
		reverse(a, a + n);
		vector<int>v;
		rec(0,0,v);
		
		cout << "Sums of " << k << ":" << endl;
		if (!vv.size())
			cout << "NONE" << endl;
		vector<vector<int>>ans(all(vv));
		reverse(all(ans));
		for (int i = 0; i < ans.size(); i++)
		{
			for (int j = 0; j < ans[i].size(); j++)
			{
				if (!j)
					cout << ans[i][j];
				else
					cout << "+" << ans[i][j];
			}
			cout << endl;
		}
		vv.clear();

	}

		
		
	return 0;
}