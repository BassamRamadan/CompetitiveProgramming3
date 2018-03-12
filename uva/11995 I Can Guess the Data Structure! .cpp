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
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);



int main(){


	Compiler_Beso


		int n;
	while (cin>>n)
	{
		
		queue<int>q;
		priority_queue<int>pq;
		stack<int>st;
		int oper, val;
		bool ff = 0;
		int a = 0, b = 0, c = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> oper >> val;
			if (oper == 1)
			{
				q.push(val);
				st.push(val);
				pq.push(val);
			}
			else
			{
				
				bool f = 0;
				if (!q.empty() &&q.front() == val)
				{
					++a, f = 1;
					q.pop();
				}
				if (!pq.empty() && pq.top() == val)
				{
					++b, f = 1;
					pq.pop();
				}
				if (!st.empty() && st.top() == val)
				{
					++c, f = 1;
					st.pop();
				}
				if (!f)
					ff = 1;		
			}
		}
		if (ff)
		{ cout << "impossible\n"; continue;	}
		set<int>s;
		s.insert(a);
		s.insert(b);
		s.insert(c);
		if (s.size() ==1)
		{cout << "not sure\n"; continue;}
		set<int>::iterator it = s.end(); it--;
		if (*it==a && *it==b || *it==a && *it==c || *it==b && *it==c)
		{cout << "not sure\n"; continue;}
		cout << (*(it) == a ? "queue" : (*(it) == b ? "priority queue" : "stack")) << "\n";

	}
	
		
	return 0;
}