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
int ok(ll x){
	int sum = 0;
	while (x>0)
	{
		sum += x;
		x /= k;
	}
	return sum;
}
int bin(){
	ll l = 1, r = 1e9, mid = 0,ans=0;
	while (l<=r)
	{
		mid = (r + l) / 2;
		int sum = ok(mid);
		if (sum >=n)
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

	
	cin >> n >> k;

	cout << bin();
		
	return 0;
}