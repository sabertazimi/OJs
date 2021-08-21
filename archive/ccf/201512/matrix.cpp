/*!
 * \file matrix.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 1005;

struct mat {
	int r, c;
	bool **M;
	 mat(int r, int c):r(r), c(c) {
		M = new bool *[r];
		for (int i = 0; i < r; ++i) {
			M[i] = new bool[c];
			for (int j = 0; j < c; ++j)
				M[i][j] = 0;
}}};

int n, q, k;

mat mul(mat A, mat B)
{
	mat C(A.r, B.c);
	for (int i = 0; i < C.r; ++i)
		for (int j = 0; j < C.c; ++j)
			for (int k = 0; k < B.r; ++k)
				C.M[i][j] ^= A.M[i][k] & B.M[k][j];
	return C;
}

mat pow(mat A, int p)
{
	mat E(A.r, A.c);
	for (int i = 0; i < A.r; ++i)
		E.M[i][i] = 1;
	while (p) {
		if (p & 1)
			E = mul(E, A);
		A = mul(A, A);
		p >>= 1;
	}
	return E;
}

int main()
{
#ifdef LOCAL
	fstream cin("data.in");
	fstream cout("out1.out", ios::out);
#endif				// LOCAL
	cin >> n;

	mat A(n, n);
	mat b(n, 1);

	char ch;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> ch;
			A.M[i][j] = ch - '0';
		}
	}
	for (int i = 0; i < n; ++i) {
		cin >> ch;
		b.M[i][0] = ch - '0';
	}

	cin >> q;
	while (q--) {
		cin >> k;
		mat t = pow(A, k);
		mat ans = mul(t, b);
		for (int i = 0; i < ans.r; ++i)
			cout << ans.M[i][0];
		cout << endl;
	}

	return 0;
}
