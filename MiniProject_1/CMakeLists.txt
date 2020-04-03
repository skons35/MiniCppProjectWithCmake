# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


# Add source to this project's executable.
#add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")

# TODO: Add tests and install targets if needed.


FIND_PACKAGE(OpenCV 3.4 REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS} )


INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/MiniProject_1/dep/inc)

FILE(GLOB sources ${CMAKE_SOURCE_DIR}/MiniProject_1/dep/src/*.cpp)
ADD_LIBRARY(miniProjLib ${sources})

ADD_EXECUTABLE(miniproj1 ${CMAKE_SOURCE_DIR}/MiniProject_1/src/miniProj1.cpp)

target_link_libraries(miniproj1 miniProjLib  ${OpenCV_LIBS})

# install part related :

SET_PROPERTY(TARGET miniproj1
  PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  )
 
INSTALL(TARGETS miniProjLib DESTINATION lib)
INSTALL(TARGETS miniproj1 DESTINATION bin)

# could also copy an EXISITNG 'run' folder into destination folder : ('run' must exist, or cmake error)
#INSTALL(DIRECTORY run DESTINATION ${CMAKE_BINARY_DIR}/run)