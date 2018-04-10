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

typedef long long LL;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<double> vd;
#define pb push_back
#define loop(i,n) for(int i = 0; i < n; i++)

const int MAX = 1e6 + 5;
const int MAX_CARS = 1e4 + 5;

int valAt[MAX];
int carAt[MAX];
string carNames[MAX_CARS];

struct Car {
	string name;
	int lowPrice, highPrice;
	int idx;
	Car() {}
	Car(string name, int lowPrice, int highPrice, int idx) {
		this->name = name;
		this->lowPrice = lowPrice;
		this->highPrice = highPrice;
		this->idx = idx;
	}
};

int main() {
#ifdef DEBUG
	freopen("in.txt", "r", stdin);
#endif
	int tests;
	cin >> tests;
	for (int test = 1; test <= tests; ++test) {
		if (test > 1) cout << endl;
		int n, q;
		cin >> n;
		vector<Car> cars;
		for (int i = 0; i < n; i++) {
			string carName;
			int lowPrice, highPrice;
			cin >> carName;
			cin >> lowPrice >> highPrice;
			cars.push_back(Car(carName, lowPrice, highPrice, i));
			carNames[i] = carName;
		}
		/* Sort cars w.r.t. lowPrice */
		sort(cars.begin(), cars.end(), [](Car c1, Car c2) {
			return c1.lowPrice < c2.lowPrice;
		});

		int ptr = 0;
		auto cmpHighPrice = [](Car c1, Car c2) {
			return c1.highPrice > c2.highPrice;
		};
		for (int i = 0; i < n; i++)
		{
			cout << cars[i].lowPrice << " " << cars[i].highPrice << " " << cars[i].name << endl;
		}
		/* Priority queue. Nodes will be popped in the increasing order of the high price */
		priority_queue<Car, vector<Car>, decltype(cmpHighPrice)> Q(cmpHighPrice);

		for (int i = 0; i < MAX; ++i) {
			while (ptr < n && cars[ptr].lowPrice == i) {
				Q.push(cars[ptr++]);
			}
			valAt[i] = Q.size();
			if (!Q.empty()) {
				carAt[i] = Q.top().idx;
			}
			while (!Q.empty() && Q.top().highPrice == i) {
				Q.pop();
			}
		}

		cin >> q;
		for (int i = 0; i < q; i++) {
			int price;
			cin >> price;
			cout << valAt[price] << endl;
			if (valAt[price] == 1) {
				cout << carNames[carAt[price]] << endl;
			}
			else {
				cout << "UNDETERMINED" << endl;
			}
		}
	}
	return 0;
}