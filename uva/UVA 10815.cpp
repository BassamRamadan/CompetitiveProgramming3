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
	set<string>ans;
	while (getline(cin, s))
	{
		string g;
		for (int i = 0; i < s.size(); i++)
		{
			if (isalpha(s[i]))
				g += tolower(s[i]);
			else
			{
				if (g!="")
					ans.insert(g);
				g = "";
			}
		}
		if (g != "")
			ans.insert(g);
	}
	for (set<string>::iterator t = ans.begin(); t != ans.end(); t++)
	{
		cout << *t << endl;
	}

	return 0;

}