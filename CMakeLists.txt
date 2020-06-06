cmake_minimum_required (VERSION 3.5)

project (app)

include_directories(lib)
file(GLOB SOURCES "lib/src/*.cpp")

add_library(lib SHARED ${SOURCES}) 

add_executable(app ${PROJECT_SOURCE_DIR}/main.cpp)

target_link_libraries(app lib)
