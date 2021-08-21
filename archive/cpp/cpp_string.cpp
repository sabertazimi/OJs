/*
 * cpp_string.cc
 * Copyright (C) 2016 sabertazimi <sabertazimi@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
#include <sstream>

/*
 * stringstream
 * 1. split: 将分隔符先替换为 ' ', 即可使用 stringstream 不断读取分割字段
 * 2. 格式转换
 */

using namespace std;

void getline_stringstream(void) {
    string line;

    while (getline(cin, line)) {
        int sum = 0,
            x;
        stringstream ss(line);

        while (ss >> x) {
            sum += x;
        }

        cout<<sum<<"\n";
    }
}

#include <cstring>

void split(void) {
    char s[] = "a, b*c, d";
    const char *sep = ".*";

    char *p;
    p = strtok(s, sep);

    while (p) {
        cout << p;
        p = strtok(NULL, sep);
    }
}

int main(void) {
    getline_stringstream();
    return 0;
}


