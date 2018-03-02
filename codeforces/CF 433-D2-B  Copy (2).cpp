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

ll a[100001],b[100001];
int main(){

	Compiler_Beso

		int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	for (int i = 1; i < n; i++)
	{
		a[i] += a[i - 1];
		b[i] += b[i - 1];
	}
	int q;
	cin >> q;
	int type, l, r;
	while (q--)
	{
		cin >> type >> l >> r;
		l--;
		r--;
	    l = max(l, 0);
		cout << (type==1?a[r]-a[l-1]:b[r]-b[l-1]) << "\n";
	}
	
	

	

	return 0;

}