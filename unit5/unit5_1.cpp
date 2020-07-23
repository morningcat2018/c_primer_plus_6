//
// Created by kevin on 2020/7/23.
//

#include <iostream>

using namespace std;

void test_for_1() {
    int i;
    for (i = 0; i < 20; i++) {
        cout << "for loop " << i + 1 << endl;
    }
}

void test_while_1() {
    int i = 10;
    while (i-- > 0) {
        cout << "for loop " << i + 1 << endl;
    }
}