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
	cin >> n;
	while (n--)
	{


		cin >> s;
		map<char, int>mp;
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		int mn = min(mp['A'] / 3, min(mp['R'] / 2, min(mp['G'], min(mp['M'], min(mp['I'], mp['T'])))));
		cout << mn << endl;
	}
	return 0;

}