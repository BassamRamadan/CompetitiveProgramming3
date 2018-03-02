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

int a[100000], com[100001];
; int main(){

	Compiler_Beso

		int n;
	cin >> n;
	map<int, int>mp;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		l--;
		com[l]--;
		com[r]++;
	}
	vector<int>v;
	for (int i = 0; i <n; i++)
	{
		com[i] += com[i - 1];
		if (com[i] == 0 )
			v.push_back(a[i]);
	}
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
	{
		if (i + 1 == v.size())
			cout << v[i];
		else
		cout << v[i] << " ";
	}

	return 0;

}