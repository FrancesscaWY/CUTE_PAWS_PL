cmake_minimum_required(VERSION 3.27)
project(week2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(week2
#        cons_.cpp
#        volatile_.cpp
#        mutable.cpp
        extern_ori.cpp
        extern_us.cpp
#        thread_local.cpp
)

add_executable(thread_local thread_local.cpp)
add_executable(cons_ cons_.cpp)
add_executable(mutable mutable1.cpp)
add_executable(mutable1 mutable1.cpp)
add_executable(new_target Scope_re.cpp)
add_executable(new_target1 operator.cpp)
add_executable(operator operator.cpp)
