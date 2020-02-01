cmake_minimum_required(VERSION 3.1.0)

#project name
project(capsig VERSION 1.0)

add_executable(capsig cap1/capsig.c)

target_link_libraries(capsig PUBLIC
    "/usr/local/lib/libapue.a")

target_include_directories(capsig PUBLIC
    "/usr/local/include")
