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
		deque<int>dq;
		for (int i = 1; i <= n; i++)
			dq.push_back(i);
		cout << "Discarded cards:";
		bool f = 0;
		while (dq.size()>1)
		{
			if (f)
				cout << ',';
			cout <<" " <<dq.front();
			dq.pop_front();
			dq.push_back(dq.front());
			dq.pop_front();
			f = 1;
		}
		cout << "\nRemaining card: " << dq.front() << "\n";
	}

	return 0;

}