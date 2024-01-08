Cmake_minimum_required(VERSION 3.22.1)
project(Calculator
        DESCRIPTION "Calculator Project")

add_subdirectory(${CMAKE_HOME_DIRECTORY}/Library)
add_executable(${PROJECT_NAME} main.c)
target_include_directories(${PROJECT_NAME} INTERFACE ./Include)
target_link_libraries(${PROJECT_NAME} PUBLIC operation)
