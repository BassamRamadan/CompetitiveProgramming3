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

int x[1000];
int main(){

	
	Compiler_Beso


		int n, a, b;
	cin >> n >> a >> b;
	if (a > b)
		swap(a, b);
	for (int i = 1; i <= n; i++)
		x[i] = i;
	
	
	
	int t = 1, r = n, ans = 0;
	bool f = 0;
	if (a==1 && b==2 && n==2)
		return	cout << "Final!",0;
		
	while (1)
	{
		t = 1;
		for (int i = 1; i <= r; i += 2)
		{
			
		
			if (x[i] == a || x[i + 1] == a)
				x[t++] = a;
			else if (x[i] == b || x[i + 1] == b)
				x[t++] = b;
			else
				x[t++] = -1;
			if (x[i] == a && x[i + 1] == b )
			{
				if (r==2)
					return  cout << "Final!",0;
				else
					return  cout << ans+1, 0;
			}

		}
		t -= 1;
		r = t;
		++ans;

	}


		
	return 0;

}