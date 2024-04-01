cmake_minimum_required(VERSION 3.27)
project(LEN_PRO)

set(CMAKE_CXX_STANDARD 17)

add_executable(LEN_PRO main.cpp
        Cweek_1/friends.cpp)
add_executable(friends Cweek_1/friends.cpp)
add_executable(cons_ Cweek_2/cons_.cpp
        Cweek_3/comma_.cpp
        Cweek_2/mutable1.cpp)
        Cweek_3/main.cpp)
add_executable(mutable Cweek_2/mutable1.cpp
        Cweek_2/mutable1.cpp)
add_executable(operator Cweek_2/operator.cpp)
