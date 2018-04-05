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
int grid[8][8];
ll s = 0,ans=0;
bool visdig1[10000], visdig2[10000],viscol[100];
void rec(int r){
	if (r == 8)
	{
		ans = max(ans, s);
		return;
	}

	for (int i = 0; i < 8; i++)
	{
		if (!viscol[i] && !visdig1[r - i + 8] && !visdig2[r + i + 8])
		{
			viscol[i] = visdig1[r - i + 8] = visdig2[r + i + 8] = 1;
			s += grid[r][i];
			rec(r + 1);
			viscol[i] = visdig1[r - i + 8] = visdig2[r + i + 8] = 0;
			s -= grid[r][i];
		}
	}

}

int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 8;i++)
		for (int j = 0; j < 8; j++)
			cin >> grid[i][j];
		ans = 0;
		clr(viscol, 0);
		clr(visdig1, 0);
		clr(visdig2, 0);
		rec(0);
		string s;
		stringstream ss;
		ss << ans;
		ss >> s;
		int x = 5 - s.size();
		while (x--)
		{
			cout << ' ';
		}
		cout << ans << endl;

	}
	return 0;
}