cmake_minimum_required(VERSION 3.23)
project(conjugate_gradient_method)

set(CMAKE_CXX_STANDARD 11)

add_executable(conjugate_gradient_method main.cpp Matrix.cpp Matrix.h Vektor.cpp Vektor.h)
