#include <iostream>

using namespace std;

int main(void) {
    int round;
    
    cin >> round;
    for (int i = 0; i < round; i++) {
        // 根据奇偶性判断走向, 直接计算出最后一个小球
        int k = 1, D, I;
        cin >> D >> I;
        
        for (int i = 0; i < D-1; i++) {
            if (I % 2 == 0) {
                k = k * 2 + 1;  // 右走
                I /= 2;         // 将当前层看作新的 root
            } else {
                k = k * 2;      // 左走
                I = (I+1)/2;    // 将当前层看作新的 root
            }
        }
        
        cout << k << endl;
    }
    
    cin >> round;
    return 0;
}