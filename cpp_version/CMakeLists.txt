cmake_minimum_required(VERSION 3.2)

set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type")

project(ranger)

option(BUILD_SHARED_LIBS "shared/static lib" ON)

include (GNUInstallDirs)

## ======================================================================================##
## Check for C++11. For GCC this is >=4.7
## ======================================================================================##
set (CMAKE_CXX_STANDARD 11)

## ======================================================================================##
## In Clang phtread flag only for compiler, not for linker. For
## windows use static linking
## ======================================================================================##
find_package (Threads)

## ======================================================================================##
## Subdirectories and source files
## ======================================================================================##
include_directories(src src/utility src/Forest src/Tree)
file(GLOB_RECURSE SOURCES src/utility/*.cpp src/Forest/*.cpp src/Tree/*.cpp)
file(GLOB_RECURSE HEADERS src/*.h)
install (FILES ${HEADERS} DESTINATION include/ranger)

## ======================================================================================##
## Debug and release targets
## ======================================================================================##
ADD_CUSTOM_TARGET(debug
  COMMAND ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Debug ${CMAKE_SOURCE_DIR}
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target all
  COMMENT "Switch CMAKE_BUILD_TYPE to Debug"
  )
ADD_CUSTOM_TARGET(release
  COMMAND ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Release ${CMAKE_SOURCE_DIR}
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target all
  COMMENT "Switch CMAKE_BUILD_TYPE to Release"
  )

add_library(ranger ${SOURCES})
if (Threads_FOUND)
  target_link_libraries(ranger ${CMAKE_THREAD_LIBS_INIT})
endif ()
install(TARGETS ranger RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	               LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
		       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

## ======================================================================================##
## Executable
## ======================================================================================##
add_executable(ranger-cli src/main.cpp)
set_target_properties(ranger-cli PROPERTIES OUTPUT_NAME ranger)
target_link_libraries(ranger-cli ranger)
install(TARGETS ranger-cli DESTINATION ${CMAKE_INSTALL_BINDIR})



