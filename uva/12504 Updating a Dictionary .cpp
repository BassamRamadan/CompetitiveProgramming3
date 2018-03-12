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
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		if (a == b)
			cout << "No changes\n";
		
		else
		{
			set<string>incr, dec, chang;
			map<string, pair<string, int>>mp;
			string g = "", val = "";
			for (int i = 0; i < a.size(); i++)
			{

				if (isalpha(a[i]))
				{
					g += a[i];
				}
				else if (a[i] >= '0' && a[i] <= '9')
				{
					val += a[i];
				}
				else if (a[i] == ',' || i == a.size() - 1)
				{

					mp[g].first = val;
					mp[g].second = 1;
					g = "";
					val = "";
				}
			}
			g = "";
			val = "";
			for (int i = 0; i < b.size(); i++)
			{

				if (isalpha(b[i]))
				{
					g += b[i];
				}
				else if (b[i] >= '0' && b[i] <= '9')
				{
					val += b[i];
				}
				else if (b[i] == ',' || i==b.size()-1)
				{
					if (mp[g].second==0)
					{
						incr .insert(g);
						mp[g].second++;
					}
					else if (mp[g].first != val)
					{
						chang.insert(g);
						mp[g].second++;
					}
					else
						mp[g].second = 2;
					
					g = "";
					val = "";
				}
			}

			
			
			bool f = 0;
			 g = "";
			if (!incr.empty())
			{
				g = '+';
				for (set<string>::iterator i = incr.begin(); i != incr.end(); i++)
				{
					
						g += *i+",";
						mp[*i].second = 2;
					

				}
				if (g.size() != 1)
				{
					g.erase(g.size() - 1, 1);
					if (g.size() > 1)
						cout << g << "\n";
				}
				g = "";
				f = 1;
			}
			if(!chang.empty())
			{
				
				g += '*';
				for (set<string>::iterator i = chang.begin(); i != chang.end();i++)
				{

					g+= *i+",";
					mp[*i].second = 2;
		
				}
				g.erase(g.size() - 1, 1);
				f = 1;
			}
			bool ff = 0;
			string d = "";
			map<string, pair<string, int>>::iterator it = mp.begin();
			while (it!=mp.end())
			{
				if (it->second.second == 1)
				{
					if (!ff)
						d+= '-';
					if (ff)
						d+= ",";
					d+=it->first;
					ff = 1;
					f = 1;
				}
				it++;
			}
			if (d.size()>1)
				cout <<d<< "\n";
			if (g.size()>1)
			{
				cout << g << "\n";
			}
			if (!f)
				cout << "No changes\n";
		}
		cout << "\n";
	}
		
	return 0;
}