cmake_minimum_required(VERSION 3.21)
project(contest_training)

set(CMAKE_CXX_STANDARD 14)

#add_executable(contest_training main.cpp backtracking/finding_subsets.cpp dynamic_programming/fibonacci_series.cpp)
#add_executable(contest_training  backtracking/finding_subsets.cpp)
#add_executable(contest_training dynamic_programming/fibonacci_series.cpp )
add_executable(contest_training dynamic_programming/n-k_ladders_to_down.cpp )
