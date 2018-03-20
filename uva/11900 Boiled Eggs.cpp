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


		int t,c=1;
	cin >> t;
	while (t--)
	{
		int n, p, q;
		cin >> n >> p >> q;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(all(v));
		int sum = 0;
		int i = 0;
		p = min(p, n);
		for (; i < p; i++)
		{
			if (sum + v[i] <= q)
				sum += v[i];
			else
				break;
		}
		cout <<"Case "<<c++<<": "<< i << endl;
	}

	return 0;
}