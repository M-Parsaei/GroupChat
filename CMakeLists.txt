cmake_minimum_required(VERSION 3.14)

set(CMAKE_C_COMPILER "clang")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=thread")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")
project(
  a12
  VERSION 1.0
  DESCRIPTION "group chat socket"
  LANGUAGES C)

include_directories(include)
file(GLOB SOURCE "src/*.c")
add_executable(server ${SOURCE})
#target_link_libraries(candykids rt)
