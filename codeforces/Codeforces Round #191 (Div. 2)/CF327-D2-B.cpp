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

***** Not easy to be successful , Don't give up
 
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
bool IsPrime(int i)
{
	if (i == 1 || i == 2 && i != 2) return 0;
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0) return 0;
	}
	return 1;
}
int main()
{
	Compiler_Beso
		
		
		int n; cin >> n;
	for (int i = 1; i <= 100000100; i++)
	{
		if (IsPrime(i))
		{
			if (n-- != 0) cout << i << " ";
			else break;
		}
	}
	cout << endl;

	return 0;
}