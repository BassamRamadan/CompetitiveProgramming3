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


		int n, k;
	cin >> n >> k;
	vector<int>v;
	map<int, int>p;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		if (!p[x])
			v.push_back(i + 1);
		p[x] = 1;
	}

	if (k>v.size())
		cout << "NO";
	else
	{
		cout << "YES" << endl;
		for (int i = 0; i < k; i++)
			cout << v[i] << " ";
	}


	return 0;
}