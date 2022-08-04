cmake_minimum_required(VERSION 3.18)  # Specifies the required CMake version.
project(bakeoffcpp)  # Defines the project name.

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)  # Includes the contents of the conanbuildinfo.cmake file.
conan_basic_setup()  # Prepares the CMakeList.txt for Conan.

# $source_files is a space-delimited list of filenames.
add_executable(bakeoffcpp src/main.cpp)  # Specifies the executable to build.
target_link_libraries(bakeoffcpp ${CONAN_LIBS})  # Specifies what libraries to link, using Conan.
