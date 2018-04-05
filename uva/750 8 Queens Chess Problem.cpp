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
int r, c,op;
bool visdig1[10000], visdig2[10000],viscol[100];
map<vector<int>, bool>mp;
void rec(int row,vector<int>v){
	if (v.size()==8)
	{
		if (v[c-1]==r)
		{
			++op;
			if (op < 10)
				cout << ' ';
			cout <<op<< "      ";
			for (int j = 0; j < 8; j++)
			{
				if (j)
					cout << ' ';
				cout << v[j];
			}
			cout << endl;
		}
		mp[v] = 1;
		return;
	}
	for (int i = 1; i <= 8; i++)
	{
		if (!viscol[i] && !visdig1[row - i + 8] && !visdig2[row + i + 8])
		{

				viscol[i] = visdig1[row - i + 8] = visdig2[row + i + 8] = 1;
				v.push_back(i);
				rec(row + 1, v);
				
				viscol[i] = visdig1[row - i + 8] = visdig2[row + i + 8] = 0;
				v.pop_back();
		}
	}

}

int main(){

	Compiler_Beso

		int t;
	cin >> t;
	while (t--)
	{
		clr(viscol, 0);
		clr(visdig1, 0);
		clr(visdig2, 0);


		cout << "SOLN       COLUMN\n";
		cout << " #      1 2 3 4 5 6 7 8\n\n";		op = 0;
		cin >> r >> c;
		vector<int>v;
		rec(r,v);
		
		if (t)
			cout << "\n";

	}
	return 0;
}