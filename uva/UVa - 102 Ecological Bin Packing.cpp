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
/*
***
**
*
	It is important to start with easy problems, 
	learn from them, 
	and work up to harder problems
 
***
**
*
*/
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e6 + 3);
 
 
int main()
{
	Compiler_Beso
 
 
		int B[3], G[3], C[3];
 
		string s = "BCG";
		while (cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2])
		{
			int b = 0, g = 0, c = 0;
			for (int i = 0; i < 3; i++)
			 b += B[i], g += G[i], c += C[i];
 
			int ans = INT_MAX;
			string ansS;
			do
			{
 
				int x = 0;
				x += b - B[s.find('B')];
				x += g - G[s.find('G')];
				x += c - C[s.find('C')];
				if (x < ans)
				{
					ans = x;
					ansS = s;
				}
 
 
 
			} while (next_permutation(all(s)));
 
 
			cout << ansS << " " << ans << endl;
		}
 
 
	return 0;
}