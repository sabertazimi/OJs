/*!
 * \file fishsize.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2017
 * \license MIT
 */
 
#include <iostream>
#include <map>

using namespace std;

const int maxn = 50+10;

int main(void) {
    int minSize;
    int maxSize;
    int n;
    int fishSize[maxn];
    map <int, bool> access;
    int res = 0;
    
    cin >> minSize >> maxSize;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> fishSize[i];
        
        for (int j = 2; j <= 10; j++) {
            access[fishSize[i]*j] = true;
            
            if (fishSize[i] % j == 0) {
                access[fishSize[i]/j] = true;
            }
        }
    }
    
    for (int i = minSize; i<= maxSize; i++) {
        if (access.find(i) == access.end()) {
            res++;
        }
    }
    
    cout << res << endl;
    
    return 0;
}