cmake_minimum_required(VERSION 3.30)
project(PowderSimulation)

set(CMAKE_CXX_STANDARD 26)

include_directories(Libraries)
include_directories(Libraries/include)

add_executable(PowderSimulation
    Libraries/include/raylib.h
    Libraries/include/raymath.h
    Libraries/include/rcamera.h
    Libraries/include/rlgl.h
    src/main.cpp)

target_link_libraries(PowderSimulation PRIVATE
        $<$<PLATFORM_ID:Windows>:${CMAKE_SOURCE_DIR}/Libraries/lib/Win/raylib.lib>
        $<$<PLATFORM_ID:Linux>:${CMAKE_SOURCE_DIR}/Libraries/lib/Linux/libraylib.so>
)
