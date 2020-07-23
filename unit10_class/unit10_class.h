//
// Created by  morningcat.zhang on 2020/7/22.
//

#ifndef C_PRIMER_PLUS_6_UNIT10_CLASS_H
#define C_PRIMER_PLUS_6_UNIT10_CLASS_H

#include <string>

using namespace std;

void test_class_1();

/**
 * 定义类（接口）模板
 */
class Stock {
    string company; // private by default
private:
    long shares;
    double share_val;
    double total_val;

    // 内联方法
    void set_tot() { total_val = shares * share_val; }

    void set_tot2();

public:
    void acquire(const string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

/**
 * 内联方法，外部实现
 */
inline void Stock::set_tot2() {
    total_val = shares * share_val;
}

#endif //C_PRIMER_PLUS_6_UNIT10_CLASS_H
