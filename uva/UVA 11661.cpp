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


int main(){

	
	Compiler_Beso


		string s;
	int n;
	while (cin >> n && n)
	{
		cin >> s;
		if (s.find('Z') != -1)
			cout << 0 << endl;
		else{
			int mn = INT_MAX;
			int a = -1, b = -1;
			for (int i = 0; i < n; i++)
			{
				if (s[i] == 'R')
				{
					a = i;
					if (b!=-1)
						mn = min(abs(a- b),mn);
					b = -1;
				}
				else if (s[i] == 'D')
				{
					b = i;
					if (a != -1)
						mn = min(abs(a - b), mn);
					a = -1;
				}

			}
			cout << mn << endl;
		}
	}

	return 0;

}