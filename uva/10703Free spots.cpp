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

bool vis[1000][1000];
int main(){

	
	Compiler_Beso

		int w, h, n;
	while (cin>>w>>h>>n && w && h)
	{
		clr(vis, 0);
		while (n--)
		{
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)
				swap(x1, x2);
			if (y1 > y2)
				swap(y1, y2);
			for (int i = x1; i <= x2; i++)
			{
				for (int j = y1; j <= y2; j++)
				{
					vis[i][j] = 1;
				}
			}
		}
		int ans = 0;
		for (int i = 1; i <= w; i++)
		{
			for (int j = 1; j <= h; j++)
			{
				ans += !vis[i][j];
			}
		}
		if (!ans)
			cout << "There is no empty spots.\n";
		 if (ans == 1)
			cout << "There is one empty spot.\n";
		 if (ans > 1)
			cout << "There are " << ans << " empty spots.\n";
		
	}
	return 0;

}