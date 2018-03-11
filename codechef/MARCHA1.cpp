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
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);


string to_str(int x){
	string s="";
	while (x)
	{
		s += ((x % 2)+'0');
		x /= 2;
	}
	reverse(all(s));
	return s;
}

int val[1000000];
int main(){


	Compiler_Beso


		int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int sz = 1 << n;

		for (int i = 0; i < n; i++)
			cin >> val[i];
		
		bool ok = 0;
		for (int i = 1; i <= sz; i++)
		{
			bitset<20>bt(i);
			int sum = 0;
			for (int j = 0; j < bt.size() && j < n; j++)
			{
				if (bt[j] == 1)
					sum += val[j];
				if (sum == m)
				{
					ok = 1;
					break;
				}
			}

		}

		cout << (ok ? "Yes" : "No")<<"\n";

	}
		


		
	return 0;
}