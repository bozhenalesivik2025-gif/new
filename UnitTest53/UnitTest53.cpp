#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(FunctionSTests) 
    {
    public:

      
        TEST_METHOD(TestMethod_S_AbsMoreThanOne)
        {
            double x = 2.0;
            double expected = 0.158775;

            double actual = s(x);

            Assert::AreEqual(expected, actual, 0.0001);
        }

        TEST_METHOD(TestMethod_S_AbsLessOrEqualOne_Positive)
        {
            double x = 0.5;
            double expected = 0.521095;

            double actual = s(x);

            Assert::AreEqual(expected, actual, 0.0001);
        }

        TEST_METHOD(TestMethod_S_AbsLessOrEqualOne_Negative)
        {
            double x = -0.5;
            double expected = -0.521095;

            double actual = s(x);

            Assert::AreEqual(expected, actual, 0.0001);
        }
        TEST_METHOD(TestMethod_S_BoundaryCase_One)
        {
        
            double x = 1.0;
            double expected = 1.17520;

            double actual = s(x);

            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}