/*!
 * \file super.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <cmath>

using namespace std;

#define LL long long

bool isPrime(LL n) {
    if (n == 1) {
        return false;
    }
    
    for (LL i = 1; i < n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main(void) {
    LL n;
    cin >> n;
    
    for (LL i = 1; i < n; i++) {
        for (LL j = 2; j < n; j++) {
            if (isPrime(i)) {
                if (pow(i, j) == n) {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }        
        }
    }
    
    cout << "No" << endl;
    return 0;
}
