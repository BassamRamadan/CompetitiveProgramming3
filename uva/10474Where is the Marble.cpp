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
int a[100000], n , q ;

int bina(int x){
	ll l = 0, r = n , mid = 0,ans=INT_MAX; 
	while (l<=r)
	{
		mid = l + (r - l) / 2;
		if (a[mid] == x)
		{
			ans = min(ans, mid);
			r = mid - 1;
		}
		else if (a[mid] > x)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return ans;
}



int main(){

	Compiler_Beso

		int c = 1;
	while (cin >> n >> q && (q||n)){
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		
		cout << "CASE# " << c++ << ":\n";
		while (q--)
		{
			int x;
			cin >> x;			int ok = bina(x);
			if (ok == INT_MAX)
				cout << x << " not found\n";
			else
				cout << x << " found at " << ok + 1 << "\n";
		}
	}
		
	return 0;
}