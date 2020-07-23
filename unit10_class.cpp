//
// Created by  morningcat.zhang on 2020/7/22.
//

#include "unit10_class.h"
#include <iostream>

/**
 * 成员函数
 */
void Stock::acquire(const string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        cout << "Number of shares can't be negative;" << endl;
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        cout << "参数异常" << endl;
        return;
    }

    shares += num;
    share_val = price;
    set_tot();
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        cout << "参数异常" << endl;
        return;
    }
    if (num > shares) {
        cout << "无足够数量" << endl;
        return;
    }
    shares -= num;
    share_val = price;
    set_tot();
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    cout << "Company: " << company << endl
         << "\tShares: " << shares << endl
         << "\tShare Price: $" << share_val << endl
         << "\tTotal Worth: $" << total_val << endl;
}


/****************************************************************/


void test_class_1() {
    Stock sliy;
    sliy.acquire("Morningct", 1000, 2.43);
    sliy.show();

    sliy.buy(200, 3.43);
    sliy.show();

    sliy.sell(200, 4.43);
    sliy.show();
}
