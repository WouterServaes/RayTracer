cmake_minimum_required(VERSION 3.27)
set(CMAKE_CXX_STANDARD 20)
project(RayTracer 
LANGUAGES CXX C
VERSION 0.0) 


find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Gui)
file(GLOB source_files CMAKE_CONFIGURE_DEPENDS "*/*.cpp")

add_executable(raytracer main.cpp ${source_files})

file(GLOB header_files CMAKE_CONFIGURE_DEPENDS "*/include/")
target_include_directories(raytracer PRIVATE ${header_files})
target_link_libraries(raytracer PRIVATE Qt6::Core)
target_link_libraries(raytracer PRIVATE Qt6::Gui)
