/*!
 * \file bits_sum.cc
 * \brief No.1
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return 0;
}

