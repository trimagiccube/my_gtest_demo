# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(GTestDemo)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

# 设置 Google Test 的路径
set(GTEST_DIR ~/gtest/googletest/gtest_install/usr/local)

# 添加 Google Test
include_directories(${GTEST_DIR}/include)
link_directories(${GTEST_DIR}/lib)

add_executable(example example.cpp)
target_link_libraries(example gtest gtest_main)
