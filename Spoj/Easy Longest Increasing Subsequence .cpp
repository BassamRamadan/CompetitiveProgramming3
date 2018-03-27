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

int n, a[10000];
int LIS(int i,int lastVal){

	if (i == n)
		return 0;
	int x = LIS(i + 1, lastVal);
	int y = 0;
	if (lastVal < a[i])
		y = LIS(i + 1, a[i]) + 1;

	return max(x, y);
}
int main(){

	Compiler_Beso

		cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << LIS(0, 0);
	

	return 0;
}