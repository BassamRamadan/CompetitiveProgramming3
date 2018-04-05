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
#define endl '\n'
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e9 + 7);
vector< vector<char> > v;
int n, m;

int rec(int i, int j){

	if (i >= n || j >= m || v[i][j] == '^')
		return 0;
	if (i == n-1  &&  j == m-1)
		return 1;

	int ret = 0;
	ret  = rec(i + 1, j);
	ret += rec(i, j + 1);

	return ret;

}
int main(){


	Compiler_Beso

		int t;
	cin >> t;
	while (t--){
		
		cin >> n >> m;
		vector<vector<char> > vv(n+1, vector<char>(m+1 ,'.'));
		v = vv;
		for (int i = 0; i < n; i++){

			int x, y;
			cin >> x;
			//cin.ignore();
			string s;
			getline(cin, s);
			stringstream ss;
			ss << s;
			while (ss >> y)
				v[x-1][y-1] = '^';
		}
		
		cout << rec(0, 0) << endl;
		if (t)
		cout << endl;
	}


	return 0;
}
