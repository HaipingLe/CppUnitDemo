CMAKE_MINIMUM_REQUIRED(VERSION 2.8) 
PROJECT(Math)    

MESSAGE("Identifying the OS...")
IF(WIN32)
    MESSAGE("This is Windows.")
ELSEIF(APPLE)
    MESSAGE("This is MacOS.")
ELSEIF(UNIX)
    MESSAGE("This is Linux.")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    SET(CMAKE_C_COMPILER "/usr/bin/gcc")
    SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
ENDIF()

#Enable testing for this directory and below. See also the add_test command. 
#Note that ctest expects to find a test file in the build directory root. 
#Therefore, this command should be in the source directory root.
enable_testing()

OPTION(BUILDENV_ENABLE_TEST "If build test" ON)
MESSAGE(STATUS "BUILDENV_ENABLE_TEST = ${BUILDENV_ENABLE_TEST}")

IF (BUILDENV_ENABLE_TEST)
    add_subdirectory(${PROJECT_SOURCE_DIR}/test)
ENDIF()

INCLUDE_DIRECTORIES("${PROJECT_SOURCE_DIR}/include")


#source files
FILE( GLOB_RECURSE SOURCES
         ${PROJECT_SOURCE_DIR}/src/*.cpp)

#header files
FILE( GLOB_RECURSE HEADERS
         ${PROJECT_SOURCE_DIR}/include/*.hpp)

add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} )