cmake_minimum_required(VERSION 3.25)

project(
    termline
    VERSION 0.0.1 
    LANGUAGES CXX
)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-std=c++23")

file(GLOB SOURCES "src/*.cpp")

# Find readline
find_library(READLINE_LIBRARY readline REQUIRED)
find_path(READLINE_INCLUDE_DIR readline/readline.h)

if(READLINE_LIBRARY)
    message(STATUS "Found readline ${READLINE_LIBRARY}")
endif(READLINE_LIBRARY)
# End find readline

find_library(NCURSES_LIBRARY ncurses REQUIRED)

add_executable(termline ${SOURCES})
target_link_libraries(termline
    readline
    ncurses)