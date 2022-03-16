INCLUDE_DIRECTORIES( ${PROJECT_SOURCE_DIR}/test
                     ${PROJECT_SOURCE_DIR}/include
                     ${CPPUNIT_INCLUDE_DIR})

#source files
FILE( GLOB_RECURSE SOURCES
         ${PROJECT_SOURCE_DIR}/src/Math.cpp
         ${PROJECT_SOURCE_DIR}/test/*.cpp)

#header files
FILE( GLOB_RECURSE HEADERS
         ${PROJECT_SOURCE_DIR}/include/*.hpp
         ${PROJECT_SOURCE_DIR}/test/*.hpp)



#build
SET (EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/build/UnitTest")
add_executable (MyUnitTest ${SOURCES} ${HEADERS})
target_link_libraries (MyUnitTest cppunit)
add_test (NAME MyUnitTest COMMAND "${EXECUTABLE_OUTPUT_PATH}/MyUnitTest")