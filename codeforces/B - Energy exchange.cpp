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
double A[10000], n, k,l=0,r=2e5,mid,s=0;
bool ok(double x){

	double rem = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i]>x)
			rem += (A[i] - x) - (A[i] - x)*k / 100;
		else
			rem +=A[i]-x;
	}
	
	return rem >= 0;
}
int main(){

	Compiler_Beso

		cin >> n >> k;
	
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i <= 100; i++)
	{
		mid = (l + r) / 2;
		if (ok(mid))
		{
			l = mid;
			s = max(l,s);
		}
		else
			r = mid;
	}
	cout <<fixed<<setprecision(6)<< s;
	return 0;
}