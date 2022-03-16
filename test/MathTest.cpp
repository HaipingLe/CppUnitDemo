#include "MathTest.hpp"

void MathTestCase::setUp()
{
    mValue1 = new double (2.0);
    mValue2 = new double (3.0);
    mMath = new Math();
}

void MathTestCase::tearDown()
{
    delete mValue1;
    delete mValue2;
    delete mMath;
}

void MathTestCase::testAdd()
{
    double result = mMath->add(*mValue1, *mValue2);
    CPPUNIT_ASSERT( result == 6.0 );
}

void MathTestCase::testMinus()
{
    double result = mMath->minus(*mValue1, *mValue2);
    CPPUNIT_ASSERT( result == 1.0 );
}