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
		int a, b, c;
		cin >> a >> b >> c;
		
		ll x[3];
		bool ok = 0;
		for (ll i = -1000; i <= 1000 && !ok; i++)
		{
			
			for (ll j = i + 1; j <= 1000; j++)
			{
				ll k = a - (i + j);
				if (k < j)
					continue;
					if (i + j + k == a && i*j*k == b && i*i + j*j + k*k == c)
					{
						x[0] = i;
						x[1] = j;
						x[2] = k;
						ok = 1;
						break;
					}
				
			}
			
		}
		if (ok)
			cout << x[0] << " " << x[1] << " " << x[2] << endl;
		else
			cout << "No solution."<<endl;
	}

		
	return 0;
}