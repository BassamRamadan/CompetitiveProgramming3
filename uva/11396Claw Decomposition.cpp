//#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
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
#include <list>
#include <climits>
#include <bitset>

/*
	Not easy to be successful,Dont give up
*/

using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
const double EPS = 1e-12;
typedef long long ll;
const double PI = 3.14159265359;
enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

int main()
{
	Compiler_Beso



		int n;
	while (cin>>n && n)
	{
		int x, y;
		vector<vector<int>>v(n + 1);
		vector<int>col(n + 1, 1e9);
		while (cin>>x>>y &&x)
		{
			v[x].push_back(y);
			v[y].push_back(x);
		}
		queue<int>q;
		q.push(1);
		col[1] = 0;
		bool f = 1;
		while (!q.empty())
		{
			int cur = q.front();
			q.pop();
			for (int w : v[cur]){
				if (col[w] == 1e9){
					col[w] = 1 - col[cur];
					q.push(w);
				}
				else if (col[w] == col[cur]){
					f = 0;
					break;
				}
			}
		}
		cout << (f ? "YES" : "NO") << endl;
	}






		
	return 0;
}