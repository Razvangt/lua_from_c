cmake_minimum_required(VERSION 3.23)

project(test)

set(CMAKE_C_STANDARD 17)

find_package(Lua REQUIRED)
find_package(Threads REQUIRED) 

set(SOURCE_FILES main.c)

add_executable(main  ${SOURCE_FILES})

# equivalente a -llua -ldl -lm 
# lua es la librearia
# dl dynamic library 
# m math library
target_link_libraries(main PUBLIC lua dl m)
