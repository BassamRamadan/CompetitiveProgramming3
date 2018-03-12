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

bool cmp(int a, int b){
	return a < b;
}

int main(){


	Compiler_Beso

		int n;
	while (cin >> n && n){
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(all(v), cmp);
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
				cout << v[i] << "\n";
			else
			cout << v[i] << " ";
		}
		
	}
	return 0;
}