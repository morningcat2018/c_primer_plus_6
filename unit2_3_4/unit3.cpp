//
// Created by morningcat on 2020/7/1.
//

#include <iostream>
#include <climits>

using namespace std;

void test_type_number() {
    short max_short = SHRT_MAX; // 16bit +
    short min_short = SHRT_MIN;
    cout << "short " << sizeof(max_short) << "byte and min value is " << min_short << ",max value is " << max_short
         << endl;
    int max_int = INT_MAX; // 16bit +
    int min_int = INT_MIN;
    cout << "int " << sizeof(min_int) << "byte and min value is " << min_int << ",max value is " << max_int << endl;

    long max_long = LONG_MAX; // 32bit +
    long min_long = LONG_MIN;
    cout << "long " << sizeof(max_long) << "byte and min value is " << min_long << ",max value is " << max_long << endl;
    long long max_llong = LLONG_MAX; // 64bit +
    long long min_llong = LLONG_MIN;
    cout << "long long " << sizeof(max_llong) << "byte and min value is " << min_llong << ",max value is " << max_llong
         << endl;
}

void test_type_unsigned_number() {
    unsigned short max_short = USHRT_MAX; // 16bit +
    cout << "unsigned short " << sizeof(max_short) << "byte and value is " << max_short << endl;
    unsigned int max_int = UINT_MAX; // 16bit +
    cout << "unsigned int " << sizeof(max_int) << "byte and value is " << max_int << endl;

    unsigned long max_long = ULONG_MAX; // 32bit +
    cout << "unsigned long " << sizeof(max_long) << "byte and value is " << max_long << endl;
    unsigned long long max_llong = ULLONG_MAX; // 64bit +
    cout << "unsigned long long " << sizeof(max_llong) << "byte and value is " << max_llong << endl;
}