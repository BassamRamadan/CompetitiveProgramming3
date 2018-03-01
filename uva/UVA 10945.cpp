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
	
	while (getline(cin, s) && s!="DONE")
	{
		string com="";
		for (int i = 0; i < s.size();i++)
		if (isalpha(s[i]))
		{
			s[i] = tolower(s[i]);
			com += s[i];
		}
		string g = com;
		reverse(all(com));
		 g = (com == g ? "You won't be eaten!" : "Uh oh..");
		cout << g << endl;
		
	}
	

	return 0;

}