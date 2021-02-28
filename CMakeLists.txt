cmake_minimum_required(VERSION 3.13)

project(drv2605l-user-driver VERSION 0.1
                             DESCRIPTION "Userspace driver for interacting with DRV2605L haptics driver"
                             LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(drv2605l-test "")
target_include_directories(drv2605l-test PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_sources(drv2605l-test
    PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/drv2605lDriver.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc")

target_link_libraries(drv2605l-test i2c wiringPi)

target_compile_options(drv2605l-test
    PUBLIC -Wall -Wno-unused-const-variable
)
