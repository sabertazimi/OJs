/*!
 * \file 1064_cable_master.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <limits>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int maxn = 10000 + 10;

int N, K;
double L[maxn];

// judgement
bool C(double x) {
	int num = 0;
	
	for (int i = 0; i < N; i++) {
		num += (int)(L[i] / x);
	}
	
	return num >= K;
}

void solve(void) {
    sort(L, L+N);
	double lb = 0, ub = L[N-1];
	
	for (int i = 0; i < 100; i++) {
		double mid = (lb + ub) / 2;
		if (C(mid)) lb = mid;
		else ub = mid;
	}
	
	printf("%.2f\n", floor(ub * 100) / 100);
}

int main(void) {
    cin >> N >> K;
    
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    
    solve();
    
    return 0;
}


