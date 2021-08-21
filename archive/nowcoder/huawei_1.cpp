/*
* @Author: sabertazimi
* @Date:   2017-03-24 19:00:30
* @Last Modified by:   sabertazimi
* @Last Modified time: 2017-03-24 19:00:30
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

using namespace std;

int reverseAdd(int a, int b) {
    if (a < 1 || b < 1 || a > 70000 || b > 70000) {
        cout << "-1" << endl;
        return 0;
    }

    stringstream s;
    stringstream ss;
    string astr;
    string bstr;
    s << a;
    s >> astr;
    ss << b;
    ss >> bstr;
    char *aastr = new char[astr.length()+1];
    char *bbstr = new char[bstr.length()+1];
    int length;

    length = astr.length();
    for (int i = (int)(astr.length() - 1); i >= 0; i--) {
         aastr[length - i - 1] = astr[i];
    }
    aastr[astr.length()] = '\0';

    length = bstr.length();
    for (int i = (int)(bstr.length() - 1); i >= 0; i--) {
        bbstr[length - i - 1] = bstr[i];
    }
    bbstr[bstr.length()] = '\0';

    stringstream sss;
    stringstream ssss;
    sss << aastr;
    sss >> a;
    ssss << bbstr;
    ssss >> b;

    cout << a + b << endl;
    return a + b;
}

int main(void){
    int a, b;
    scanf("%d,%d", &a, &b);
    reverseAdd(a, b);

    return 0;
}
