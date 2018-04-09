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


		string s,g;
	map<string, string>mp;
	while(getline(cin,s) && s!="")
	{
		stringstream ss;
		ss << s;
		ss >> s;
		ss >> g;
		mp[g] = s;
	}
	while (cin>>s)
	{
		
		if (mp[s] != "")
			cout << mp[s] << endl;
		else
			cout << "eh" << endl;
	}
		
	return 0;
}