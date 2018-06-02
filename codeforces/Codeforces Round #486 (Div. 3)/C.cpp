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

int main(){

	Compiler_Beso

		int k;
	cin >> k;
	map<int, vector<pair<int, int>>>up;
	for (int i = 1; i <= k; i++){
		int n; cin >> n;
		vector<int>v(n);
		ll s = 0;
		for (int j = 0; j < n; j++){
			cin >> v[j];
			s += v[j];
		}
		map<int, int>m;
		for (int j = 0; j < n; j++){
			if (!m[v[j]])
			{
				up[s - v[j]].push_back({i,j+1});
			}
			m[v[j]] = 1;
		}
	}
	for (auto w : up){
		if (w.second.size() >= 2){
			cout << "YES" << endl;
			vector<pair<int, int>>v(w.second);
			cout << v[0].first << " " << v[0].second << endl;
			return cout << v[1].first << " " << v[1].second, 0;
		}
	}
	cout << "NO";
	
	
	return 0;
}