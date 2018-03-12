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
#include "list.h"
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
const double EPS = 1e-12;
const double PI = 3.14159265359;




int main(){


	Compiler_Beso

	student<string>s;
	s.set("bassam", "ram", "kjshsjk", 2);
	s.RegisterCourse("math");
	s.RegisterCourse("data");
	
	s.show();
	s.DropCourse("math");
	s.DropCourse("data");
	s.show();
	return 0;
}