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


ll A[100000], B[100000],x,s=0;
int main(){

	Compiler_Beso

		int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> A[i], s += A[i];
	for (int i = 0; i < m; i++)
	{
		cin >> x, x--;
		s -= A[x];
		B[i] = A[x];
	}
	sort(B, B + m);
	reverse(B, B + m);
	for (int i = 0; i < m; i++)
	{
		if (s>B[i])
			s += s;
		else
			s += B[i];
	}
	cout << s;
	return 0;
}