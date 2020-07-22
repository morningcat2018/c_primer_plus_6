//
// Created by  morningcat.zhang on 2020/7/22.
//

#ifndef C_PRIMER_PLUS_6_UNIT10_CLASS_H
#define C_PRIMER_PLUS_6_UNIT10_CLASS_H

#include <string>

using namespace std;

void test_class_1();

class Stock {
private:
    string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    string name;

    void show();

    double get_tot() { return total_val; }
};

#endif //C_PRIMER_PLUS_6_UNIT10_CLASS_H
