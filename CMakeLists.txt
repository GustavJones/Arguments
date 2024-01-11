cmake_minimum_required(VERSION 3.5)
project(Arguments)

set(BUILD_TESTS ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

file(GLOB SOURCES "src/*.cpp" "include/*.hpp")

if(BUILD_SHARED_LIBS)
  add_library(${PROJECT_NAME} SHARED ${SOURCES})
else()
  add_library(${PROJECT_NAME} STATIC ${SOURCES})
endif()

target_include_directories(${PROJECT_NAME} PRIVATE include)

if(BUILD_TESTS)
  add_executable(Test1 "test/test1.cpp")
  target_include_directories(Test1 PRIVATE "include")
  target_link_libraries(Test1 PRIVATE Arguments)
endif()
