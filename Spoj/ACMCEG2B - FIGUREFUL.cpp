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


		int n;
	cin >> n;
	map<pair<int, int>,string> mp;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		string s;
		cin >> a >> b >> s;
		mp[{a, b}] = s;
	}
	int q;
	cin >> q;
	while (q--)
	{
		int x, y;
		cin >> x >> y;
		cout << mp[{x,y}] << endl;
	}
		
	return 0;
}