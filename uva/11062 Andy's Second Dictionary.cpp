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



int main(){


	Compiler_Beso


		string s, sav;
	set<string>st;
	while (cin>>s)
	{
		if (sav != "")
			sav.erase(sav.size() - 1, 1);
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i]))
			{
				s[i] = tolower(s[i]);
				sav += s[i];
			}
			else if (s[i] == '-' )
				sav += s[i];
			else if (s[i] != '-')
			{
				
					if (sav != "")
						st.insert(sav);
				sav = "";
			}
		}
		
		if (sav != "" && sav[sav.size() - 1] != '-')
			st.insert(sav), sav = "";
		else if (sav.size() == 1 && sav[0] != '-')
			st.insert(sav), sav = "";
		
	}

	if (sav != "")
		st.insert(sav);
	for (set<string>::iterator t = st.begin(); t != st.end(); t++)
	{
		cout << *t << endl;
	}

		
	return 0;
}