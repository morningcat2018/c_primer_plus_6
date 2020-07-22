//
// Created by morningcat.zhang on 2020/7/22.
//

#include <iostream>
#include <climits>
#include <string>
#include <cstring>
#include "unit4.h"

using namespace std;

/**
 * 数组：typeName arrayName[arraySize]
 * arraySize 不能是变量
 */
void test_array_1() {
    short months[12];
    months[0] = 1;

    for (int i = 0; i < sizeof(months) / sizeof(short); i++) {
        months[i] = i + 1;
        //cout << "这是 " << months[i] << "月" << endl;
    }

    int yams[3] = {3, 8, 6};
    cout << yams[2] << "---" << yams[1] << endl;

    short things[] = {6, 5, 5, 3, 6};
    cout << sizeof things / sizeof(short) << endl;
}

void test_string_1() {
    char dog[8] = {'b', 'e', 'a', 'u', 'x', '\0'};
    char cat[12] = {'m', 'o', 'r', 'n', 'i', 'n', 'g'}; // not string
    cout << dog << endl;
    cout << cat << endl;

    /**
     * 字符串常量（字面量）
     */
    char hello[] = "hello world";
    cout << hello << endl;
    // 记得有 '\0'
    cout << sizeof hello / sizeof(char) << endl;

    /**
     *  注意 ： "S" 与 'S' 的区别
     */
}

void test_string_2() {
    cout << "I do give my" "right arm to..." << endl;


}

/**
 * ISO/ANSI C++98 添加了 string 类
 */
void test_string_3() {

    string str1;
    string str2 = "hello string";
    cout << str2 << endl;

    str2 = str2 + " 你好，字符串";
    cout << str2 << endl;

    char charr1[20] = "world";
    char charr2[20];
    strcpy(charr2, charr1);
    cout << charr2 << endl;

}

void test_struct_1() {
    dog d1 = {"qiaoxiaoxiao", 0.01, 10001};
    cout << "this dog name is " << d1.name << endl;

    // C++11 中 = 可选
    dog d2{"hellohello", 0.02, 10002};
    cout << "this dog name is " << d2.name << endl;
}

void test_struct_2() {
    cat mc1{"zhang", "lie"};
    cout << mc1.name << endl;

    mc1.name = "_mm";
    cout << mc1.name << endl;

    cat cats[2] = {
            {"zhangsan", "张三"},
            {"lisi",     "李四"}
    };
    cout << cats[0].desc << endl;
    cout << cats[1].desc << endl;
}

void test_enum_1() {
    Color color1 = RED;
    Color color2 = YELLOW;
    cout << color1 << endl;
}