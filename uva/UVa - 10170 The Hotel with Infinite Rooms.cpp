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
 
ll l, r;
unsigned long long bin()
{
	unsigned long long st = l ,end = 1e18, m = 0;
	unsigned long long c = 1e18;
 
	while (st<=end)
	{
 
		m = st+(end-st) / 2;
 
		if (m*(m + 1) / 2 - ((l-1)*l/2) == r)
			return m;
		if (m*(m + 1) / 2 - ((l - 1)*l / 2)>r)
		{
			c = min(m, c);
			end = m-1;
		}
		else
			st = m + 1;
	}
	return c;
}
 
int main(){
 
	Compiler_Beso
 
 
 
	while (cin>>l>>r)
	{
 
		cout << bin() << endl;
	}
 
 
 
	return 0;
 
}