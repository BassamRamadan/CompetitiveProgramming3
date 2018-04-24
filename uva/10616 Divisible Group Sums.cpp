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
int n, m, ans;
vector<int>v;
ll mem[200][20][20][1000];
ll fix(int x){
	return (x%m + m) % m;
}
ll dp(int N, int c, int sum){
	if (N == n)
		return (sum == 0 && !c);
	if (!c)
		return sum == 0;
	if (mem[N][c][m][sum] != -1)
		return mem[N][c][m][sum];
	int x = dp(N + 1, c, fix(sum));
	int y = dp(N + 1, c - 1, fix(sum + v[N]));
	return mem[N][c][m][sum] = x + y;
}
int main(){

	Compiler_Beso


		
		int q, st = 1;
	while (cin >> n >> q && (n || q))
	{
		cout << "SET " << st++ << ": " << endl;
		clr(mem, -1);
		vector<int>vv(n);
		v = vv;
		for (int i = 0; i < n; i++)
			cin >> v[i];
		for (int i = 1; i <= q; i++){
			int c;
			cin >> m >> c;
			ll ans = dp(0, c, 0);
			if (i == q)
				cout << "QUERY " << i << ": " << ans;
			else
				cout << "QUERY " << i << ": " << ans << endl;
		}
	}
	return 0;
}