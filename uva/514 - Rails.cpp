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


int main(){

	
	Compiler_Beso


		int n;
	while (cin>>n && n)
	{
		
		int num;
		stack<int>st;
		
		int i = 1, c = 0;
		while (cin>>num && num )
		{
			c++;
			while (true)
			{
				if (i == num)
				{
					i++;
					break;
				}
				else if (!st.empty() && st.top() == num)
				{
					st.pop();
					break;
				}
				else if (!st.empty() && st.top() > num)
					break;
				st.push(i);
				i++;
			}
			if (c == n){
				cout << (st.empty() ? "Yes" : "No") << "\n", i = 1;
				while (!st.empty())
				{
					st.pop();
				}
					c = 0;
			}
		}
		cout << "\n";
	}


		
	return 0;

}