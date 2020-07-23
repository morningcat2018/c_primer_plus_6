cmake_minimum_required(VERSION 3.15)
project(c_primer_plus_6)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 main.cpp
        unit2_3_4/unit2.h unit2_3_4/unit2.cpp
        unit2_3_4/unit3.h unit2_3_4/unit3.cpp
        unit2_3_4/unit4.h unit2_3_4/unit4.cpp
        unit5/unit5_1.cpp unit5/unit5_1.h


        unit10_class/unit10_class.cpp unit10_class/unit10_class.h

        )