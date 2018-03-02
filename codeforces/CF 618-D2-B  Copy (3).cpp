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

int a;
int main(){

	
	Compiler_Beso


		int n;
	cin >> n;
	vector<int>v;
	map<int,int>mp;
	for (int i = 0; i < n; i++)
	{
		int mx = INT_MIN;
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			mx = max(mx, a);
		}
		v.push_back(mx);
		mp[mx]++;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (i == v[j])
			{
				break;
			}
			else if (v[j] < i && !mp[i] && mp[v[j]]>1)
			{
				v[j] = i;
				break;
			}
		}
	}
	for (int j = 0; j < v.size(); j++)
		cout << v[j] << " ";

	
	return 0;

}