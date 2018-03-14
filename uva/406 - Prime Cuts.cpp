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
const int MX = 1e6;
bool f[MX + 5];
vector<int>prim;
void seive(){
	f[0] = f[1] = 1;
	prim.push_back(1);
	for (ll i = 1; i <= 10000; i++)
	{
		if (!f[i]){
			prim.push_back(i);
			for (ll j = i*i; j <= MX; j += i)
				f[j] = 1;
		}
	}
}
 
int main(){
 
	Compiler_Beso
 
 
 
	seive();
 
	int n, c;
	while (cin>>n>>c)
	{
		vector<int>s;
		cout << n << " " << c << ": ";
			for (int i = 0; i < prim.size(); i++)
			{
				if (prim[i] <= n)
					s.push_back(prim[i]);
				else
					break;
			}
			if (s.size() & 1)
				c = c * 2 - 1;
			else
				c *= 2;
			if (c >= s.size())
			{
				for (int i = 0; i < s.size(); i++)
				{
					if (i + 1 == s.size())
						cout << s[i] << endl;
					else
						cout << s[i] << " ";
				}
			}
			else{
				int id = s.size() / 2.;
				if (c & 1);
				else
					id--;
				deque<int>q;
				for (int i = id, j = id + 1; i >= 0 || 1; i--, j++)
				{
					if (i>=0 && c-- )
						q.push_front(s[i]);
					if (c--)
						q.push_back(s[j]);
					if (c<=0)
						break;
				}
 
				for (int i = 0; i < q.size(); i++)
				{
					if (i + 1 == q.size())
						cout << q[i] << endl;
					else
						cout << q[i] << " ";
				}
			}
			cout << endl;
	}
 
 
 
 
 
	return 0;
 
}