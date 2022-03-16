#ifndef CPP_UNIT_MATHTEST_CASE_H
#define CPP_UNIT_MATHTEST_CASE_H

#include <cppunit/extensions/HelperMacros.h>
#include "Math.hpp"

class MathTestCase : public CppUnit::TestFixture
{
public:
    //CppUnit provides a setUp and a tearDown method to manage the fixture.
    //Therefore, you can eg. create file objects in setUp to open the source files and release these resources in the tearDown method. 
    //The important thing to note is that setUp and tearDown will be called for every 'test' that you run.
    void setUp() override;
    void tearDown() override;


    //Interface functions
public:
    void testAdd();
    void testMinus();

//Test suites
private:
    CPPUNIT_TEST_SUITE( MathTestCase );
    CPPUNIT_TEST( testAdd );
    CPPUNIT_TEST( testMinus );
    CPPUNIT_TEST_SUITE_END();
    

//private members
private:
    double *mValue1;
    double *mValue2;
    Math *mMath;
};

#endif