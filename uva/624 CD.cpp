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
int a[10000];
int mn = -1;
int n,k;
vector<int>vv;
void rec(int i, int sum, vector<int>v){
	if (i == n)
	{
		if (sum <= k)
		{
			if (sum >= mn)
				vv = v,mn=sum;

		}
		return;
	}
	rec(i+1, sum,v);
	v.push_back(a[i]);
	rec(i + 1, sum+a[i],v);
}

int main(){

	Compiler_Beso

	while (cin >> k >> n){
		mn = -1;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		vector<int>v;
		rec(0,0,v);
		for (int i = 0; i < vv.size(); i++)
			cout << vv[i] << " ";
		cout << "sum:";
		cout << mn << endl;

	}

		
		
	return 0;
}