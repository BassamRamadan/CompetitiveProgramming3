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

	while (getline(cin,s))
	{
		int c=0;
		bool f = 0;
		deque<char>dq;
		deque<char>::iterator it = dq.begin();
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '[')
				f = 1,c=0;
			else if (s[i] == ']')
				f = 0,c=0;
			else if (f)
			{
			
				
			it = dq.begin() + c;
			dq.insert(it,s[i]);
			c++;
				
			}
			else
				dq.push_back(s[i]);
		}
		for (int i = 0; i < dq.size(); i++)
			cout << dq[i];
		cout << "\n";
	}
	
	return 0;

}