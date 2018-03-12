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
map<string, int>mp;
int pos = 1,sz;
void generat(string s,int len){
	if (len==sz)
	{
		mp[s] = pos++;
		return;
	}
	char last;
	if (s.empty())
		last = 'a';
	else
		last = s[s.size() - 1] + 1;
	for (char alpha = last; alpha <= 'z'; alpha++)
	{
		generat(s + alpha, len + 1);
	}
}

int main(){


	Compiler_Beso



	for (sz = 1; sz <= 5; sz++)
	{
		generat("", 0);
	}
	string g;
	while (cin>>g)
	{
		cout << mp[g] << "\n";
	}
		
	return 0;
}