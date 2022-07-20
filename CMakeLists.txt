cmake_minimum_required(VERSION 3.22)
project(27_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(27_2 main.cpp include/figure.h src/figure.cpp include/circle.h src/circle.cpp include/triangle.h src/triangle.cpp include/square.h src/square.cpp include/rectangle.h src/rectangle.cpp include/point.h src/point.cpp)
target_include_directories(27_2 PUBLIC include)