cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)

include_directories(src/include)
aux_source_directory(src/main dir_srcs)

add_executable(HelloWorld src/main/main.cpp src/source/model/Student.cpp src/include/model/Student.h src/main/WinMain.cpp src/include/resource.h src/source/model/Shape.cpp src/include/model/Shape.h src/source/model/Rectangele.cpp src/include/model/Rectangele.h src/source/dao/FileOpearation.cpp src/include/dao/FileOpearation.h src/source/dao/Utils.cpp src/include/dao/Utils.h)

