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

int a[1000];
int main(){

	
	Compiler_Beso


		int n,k,ans=0;
	cin >> n>>k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = k, j = k; i > 0 || j <= n; i--, j++)
	{
		if (i > 0 && j <= n)
		{
			if (i == k)
			{
				ans += a[i];
				continue;
			}
			ans += a[i] == a[j] && a[i] ? 2 : 0;
		}
		else if (i > 0)
			ans += a[i];
		else if (j <= n)
			ans += a[j];
	}

	cout << ans;
	return 0;

}