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

bool ok(int x){

	for (int i = 2; i <= sqrt(x);i++)
	if (x%i==0)
		return 0;
	return 1;
}
int n;

bool stop;
map<vector<int>, int>veiw;
void rec(vector<int>v, map<int, int>mp){

	if (v.size() == n)
	{
		bool f = 0;
		if (mp.size() != n)
			return;
		for (int i = 1; i < v.size(); i++)
		{
			if (!ok(v[i] + v[i - 1]))
				f = 1;
		}
		if (!ok(v[v.size() - 1] + v[0]))
			f = 1;
		if (!f)
		{
			if (veiw[v] == 0)
			{
				for (int i = 0; i < v.size(); i++)
				{
					cout << v[i] ;
					if (i + 1 != v.size())
						cout << " ";
				}
				cout << endl;
			}
			veiw[v] = 1;
		}
		return;
	}
	for (int i = 2; i <= n; i++)
	{
		if (mp[i] == 0)
		{
			
			if (ok(v[v.size() - 1] + i))
			{
					mp[i] = 1;
					v.push_back(i);
					rec(v, mp);
					mp[i] = 0;
					v.pop_back();
			}
		}
	}
}

int main(){

	Compiler_Beso

		int c = 1;
	bool end = 0;
	while (cin>>n)
	{
		if (end)
			cout << endl;
		cout << "Case "<<c++<<":" << endl;
		vector<int>ans;
		ans.push_back(1);
		map<int, int>mp;
		mp[1] = 1;
		rec(ans,mp);
		veiw.clear();
		end = 1;
	}


	return 0;
}