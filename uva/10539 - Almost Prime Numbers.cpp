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
#include <cctype>
#include <bitset>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;
typedef long long ll;
const ll mod = ll(1e6 + 3);
 
 
bool f[1000000];
 
void seive(int N){
	f[0] = f[1] = 1;
	for (int i = 1; i <= N; i++){
		if (f[i])
			continue;
 
		for (ll j = (ll)i*i; j <= N; j += i)
			f[j] = 1;
	}
}
 
 
int main(){
 
	Compiler_Beso
													/* any number is almost if he equal( prime (power x)) 
														example 2^2 , 2^3 , 2^4.....so on in step (1)
 
														so that i get all prime and check all power ans push to answeer
														in step (2),(3)
														*/
 
		seive(1000000);// (1)
	long long int almost[80070],i,j;
	int top = 0;
	int count = 0;
	for (i = 2; i <= 1000000; i++)
	{
		if (!f[i])     // (2)
		for (j = i*i; j <= 1000000000000; j *= i)     // (3)
			almost[top++] = j;
	}
		int n;
		cin >> n;
	while (n--)
	{
		ll l, r;
		cin >> l >> r;
		if (l > r)
			swap(l, r);
		int count = 0;
		for (i = 0; i<80070; i++)
		if (almost[i] >= l&&almost[i] <= r)
			count++;
		cout << count << endl;
	}
 
 
	return 0;
 
}