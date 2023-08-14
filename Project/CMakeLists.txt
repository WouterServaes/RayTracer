cmake_minimum_required(VERSION 3.27)
set(CMAKE_CXX_STANDARD 20)
project(RayTracer 
LANGUAGES CXX C
VERSION 0.0) 


find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM4 REQUIRED gtkmm-4.0)
pkg_check_modules(GLIB REQUIRED glibmm-2.68)

include_directories(${GTKMM4_INCLUDE_DIRS})
link_directories(${GTKMM4_LIBRARY_DIRS})
include_directories(${GLIB_INCLUDE_DIRS})
link_directories(${GLIB_LIBRARY_DIRS})
include(CMakePrintHelpers)

file(GLOB source_files CMAKE_CONFIGURE_DEPENDS "*/*.cpp")

add_executable(raytracer main.cpp ${source_files})

file(GLOB header_files CMAKE_CONFIGURE_DEPENDS "*/include/")
target_include_directories(raytracer PRIVATE ${header_files})
target_link_libraries(raytracer PRIVATE ${GTKMM4_LIBRARIES})
target_link_libraries(raytracer PRIVATE ${GLIB_LIBRARIES})
