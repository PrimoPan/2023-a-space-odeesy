cmake_minimum_required(VERSION 3.23)
project(odeesy)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(odeesy main.cpp)

target_link_libraries(odeesy ${OpenCV_LIBS})
