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
ll n;
ll s(ll x){
	ll z = 0;
	while (x)
	{
		z += x % 10;
		x /= 10;
	}
	return z;
}
bool bin(ll mid){
	
	return mid*mid + s(mid)*mid - n == 0;
}

int main(){

	Compiler_Beso

	
	cin >> n;
	ll k = sqrt(n),c=0;
	k++;
	while (k--)
	{
		c++;
		if (bin(k))
			return cout << k, 0;
		if (c>10000)
			return cout << -1, 0;
	}
	return cout << -1, 0;

		
		
	return 0;
}