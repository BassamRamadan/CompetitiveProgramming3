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



int main(){

	Compiler_Beso


		int t,c=1;
	cin >> t;
	while (t--)
	{
		int n,nn=0,ans=0;
		string s;
		cin >> n >> s;
		bool ok = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '.' && !ok)
				ok = 1,nn=1;
			else if (ok)
			{
				nn++;
				if (nn % 3 == 0)
					++ans,nn=0,ok=0;
				
			}
		}
		if (nn)
			++ans;
		cout << "Case "<<c++<<": " << ans << endl;

	}

	return 0;
}