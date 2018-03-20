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

int n, k;
int a[1000000];
bool ok(ll x){
	ll sum = 0,e=0;
	for (int i = 0; i < n; i++)
	{
		if (sum + a[i] <= x)
			sum += a[i];
		else if (sum && sum<=x)
			e++, sum = a[i];
		else
			return 0;
	}
	if (sum <= x)
		e++;
	else
		return 0;
	return e <= k;

}
ll bin(){
	ll l = 0, r = 1e9,mid = 0,ans=0;
	while (l<=r)
	{
		
		mid = l + (r - l) / 2;
		if (ok(mid))
		{
			r = mid - 1;
			ans = mid;
		}
		else
			l = mid + 1;
	}
	return ans;
}

int main(){

	Compiler_Beso


		
	while (cin>>n>>k)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];

		cout << bin() << endl;

	}

		

	return 0;
}