/*!
 * \file rotate_words.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

bool isRotate(string x, string y) {
    char first = x[0];
    int n = y.length();
    bool flag;
    
    for (int i = 0; i < n; i++) {
        if (first == y[i]) {
            flag = true;
            for (int j = 0; j < n; j++) {
                if (x[j] != y[(i+j)%n]) {
                    flag = false;
                    break;
                }
            }
        }
    }
    
    return flag;
}

int main(void) {
    int n;
    cin >> n;
    
    vector <string> words(n);
    map <int, bool> acc;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        string x = words[i];
        
        for (int j = i + 1; j < n; j++) {
            string y = words[j];
            
            if (x.length() != y.length() || acc.find(j) != acc.end()) {
                continue;
            }
            
            if (isRotate(x, y)) {
                if (acc.find(i) == acc.end()) {
                    res++;
                    acc[i] = true;
                }
                
                acc[j] = true;
            }
        }
    }
    
    cout << res << endl;
    
    return 0;
}

