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
vector<int> a(5);


bool rec(int sz, int val){

	
	if (sz == 5)
		return val == 23;

	bool ret = 0;

	ret = max(rec(sz + 1, val + a[sz]), ret);
	ret = max(rec(sz + 1, val - a[sz]), ret);
	ret = max(rec(sz + 1, val * a[sz]), ret);

	return ret;
}

int main(){

	Compiler_Beso

		
	while (cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4] && (a[0] || a[1] || a[2] || a[3] || a[4]))
	{
		bool ok = 0;
		sort(all(a));
		do{
			
			if (rec(1, a[0])){
				ok = 1;
				break;
			}
		} while (next_permutation(all(a)));

		cout<<(ok ?"Possible":"Impossible" )<< endl;
	}
		

	return 0;
}