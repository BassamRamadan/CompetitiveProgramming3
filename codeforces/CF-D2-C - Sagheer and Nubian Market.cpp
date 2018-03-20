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
int a[100000];
int n, k;
ll ok(ll x){
	ll sum = 0;
	vector<ll>v;
	for (int i = 0; i < n; i++)
	{
		v.push_back((i + 1)*x + a[i]);
	}
	sort(all(v));
	for (int i = 0; i < x; i++)
		sum += v[i];
	return sum;
}
pair<ll, ll>ans[1];

void bina(){
	ll l = 0, r = n, mid = 0;

	while (l <= r)
	{
		mid = (r + l) / 2;
		ll sum = ok(mid);
		//cout << mid << " " << sum << endl;
		if (sum <= k)
		{
			l = mid + 1;
			if (mid > ans->first)
			{
				ans->first = mid;
				ans->second = sum;
			}
			else if (mid == ans->first)
				ans->second = min(sum, ans->second);
		}
		else
			r = mid - 1;
	}

}



int main(){

	Compiler_Beso


		cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	bina();

	cout << ans->first << " " << ans->second;

	return 0;
}