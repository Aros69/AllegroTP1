cmake_minimum_required(VERSION 3.28)
project(HelloAllegro2)

set(CMAKE_CXX_STANDARD 17)

add_executable(HelloAllegro2 main.cpp)
target_link_libraries(HelloAllegro2 -lmingw32 -lallegro-5.0.10-monolith-md-debug)
