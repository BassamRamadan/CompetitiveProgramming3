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

bool cmp( pair<  pair<int, pair<int, int> >, string >  a,  pair<  pair<int, pair<int, int> >, string > b){

	if (a.first.first > b.first.first || (a.first.first == b.first.first&&a.first.second.first > b.first.second.first) ||
		(a.first.first == b.first.first&&a.first.second.first == b.first.second.first && a.first.second.second < b.first.second.second) 
		|| (a.first.first == b.first.first&&a.first.second.first == b.first.second.first && a.first.second.second == b.first.second.second && a.second<b.second)
		)
		return 1;
	return 0;
}
int main(){

	Compiler_Beso


		int n;
	cin >> n;
	vector < pair<  pair<int, pair<int, int> > , string > > v;
	for (int i = 0; i < n; i++)
	{
		string s;
		int a, b, c;
		cin >> s >> a >> b >> c;
		pair < int, pair<int, int>>x;
		x.first = a;
		x.second.first = b;
		x.second.second = c;
		v.push_back(make_pair(x, s));
	}
	sort(all(v),cmp);
	for (int i = 0; i < n; i++)
		cout << v[i].second << endl;
		
	return 0;
}