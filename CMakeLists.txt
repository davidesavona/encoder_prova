cmake_minimum_required(VERSION 3.0.0)

project(encoderprova VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable(${PROJECT_NAME} "main.cpp" bcmencoder.cpp bcmencoder.h)


add_library(lbcm2835 STATIC IMPORTED)
set_target_properties(lbcm2835 PROPERTIES
    IMPORTED_LOCATION /home/pi/bcm2835-1.71/src/libbcm2835.a)

target_link_libraries(${PROJECT_NAME} Qt5::Core lbcm2835)
