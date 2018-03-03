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

int a[100][100];
int main(){


	Compiler_Beso

		int n;
	while (cin>>n && n)
	{
		int changes = 0;
		int ones = 0, change_row=-1, change_col=-1;
		for (int i = 0; i < n; i++)
		{
			ones = 0;
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if (a[i][j])
					++ones;
			}
			if (ones & 1)
			{
				++changes, change_row = i;
			}
		}
		if (changes > 1)
		{
			cout << "Corrupt\n";
		}
		
		else
		{
			bool f = 0,ff=0;
			for (int j = 0; j < n; j++)
			{
				ones = 0;
				int i;
				for ( i = 0; i < n; i++)
				{
					if (a[i][j])
						++ones;
				}
				if ((ones & 1 )&& !f)
				{
					f = 1;
					if (change_row!=-1)
							change_col = j;
						else
						{
							
							cout << "Corrupt\n";
							ff = 1;
							break;
						}
				}
				else if ((ones & 1) && f)
				{
					
					cout << "Corrupt\n";
					ff = 1;
					break;
				}
			}
			if (!ff){
				if (f)
					cout << "Change bit (" << change_row + 1 << "," << change_col + 1 << ")\n";
				else
					cout << "OK\n";
			}
		}
	}

	return 0;

}