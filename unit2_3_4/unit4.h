//
// Created by morningcat.zhang on 2020/7/22.
//


#ifndef C_PRIMER_PLUS_6_UNIT4_H
#define C_PRIMER_PLUS_6_UNIT4_H

#include <string>

using namespace std;

void test_array_1();

void test_string_1();

void test_string_2();

void test_string_3();

void test_struct_1();

void test_struct_2();

/**
 * 结构体
 */
struct dog {
    char name[20];
    float vv;
    long id;
};

struct cat {
    string name;
    string desc;
};

/**
 * 另一种定义方法
 */
struct {
    string name;
    int age;
} hw;

/**
 * 结构体嵌套
 */
struct zoo {
    dog dogs[10];
    cat cats[10];
};
// ******************************

/**
 * 枚举
 */
enum Color {
    RED, YELLOW, GREEN, ORANGE
};

void test_enum_1();

#endif //C_PRIMER_PLUS_6_UNIT4_H
