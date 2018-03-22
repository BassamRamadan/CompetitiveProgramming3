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


		int n;
	
	while (cin >> n && n)
	{
		cin.ignore();
		string s;
		vector<int>ans;
		for (int i = 0; i < n; i++)
		{
			getline(cin, s);
			int c = 0;
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] != 'X')
					++c;
			}
			ans.push_back(c);
		}

		int mn = 0;
		if (ans.size())
		 mn = *min_element(all(ans));
		int res = 0;
		for (int i = 0; i < ans.size(); i++)
		{
			res += ans[i] - mn;
		}
		cout << res << endl;
	}

	

		
		
	return 0;
}