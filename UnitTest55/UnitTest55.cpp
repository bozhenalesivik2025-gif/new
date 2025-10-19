#include "pch.h"
#include "CppUnitTest.h"
#include <cmath> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double d1 = 0;
double d2 = 0;

double findNthTerm(double a1, double d, int n) {
    if (n == 1) {
        return a1;
    }
    else {
        d1++;
        return findNthTerm(a1, d, n - 1) + d;
    }
}
double findSum(double a1, double d, int n) {
    if (n == 1) {
        return a1;
    }
    else {
        d2++;
        double an = a1 + (n - 1) * d;
        return findSum(a1, d, n - 1) + an;
    }
}


namespace UnitTest55
{
    TEST_CLASS(UnitTest55)
    {
    public:
   
        const double tolerance = 0.00001;

        TEST_METHOD_INITIALIZE(ResetGlobalCounters)
        {

            d1 = 0;
            d2 = 0;
        }

        TEST_METHOD(Test_N4_StandardCase)
        {
        
            double a1 = 2.0;
            double d = 3.0;
            int n = 4;
         
            double expected_an = 11.0;     
            double expected_sum = 26.0;    
            double expected_depth = 3.0;   

            double actual_an = findNthTerm(a1, d, n);
            double actual_d1 = d1; 

            d2 = 0;
            double actual_sum = findSum(a1, d, n);
            double actual_d2 = d2; 

         
            Assert::AreEqual(expected_an, actual_an, tolerance, L"findNthTerm_Значення");
            Assert::AreEqual(expected_depth, actual_d1, tolerance, L"findNthTerm_Глибина");
            Assert::AreEqual(expected_sum, actual_sum, tolerance, L"findSum_Значення");
            Assert::AreEqual(expected_depth, actual_d2, tolerance, L"findSum_Глибина");
        }

        TEST_METHOD(Test_N1_BaseCase)
        {
         
            double a1 = 5.0;
            double d = 10.0;
            int n = 1;
            double expected_an = 5.0;
            double expected_sum = 5.0;
            double expected_depth = 0.0; 

            double actual_an = findNthTerm(a1, d, n);
            double actual_d1 = d1;

            d2 = 0; 
            double actual_sum = findSum(a1, d, n);
            double actual_d2 = d2;

            Assert::AreEqual(expected_an, actual_an, tolerance, L"findNthTerm (n=1)_Значення");
            Assert::AreEqual(expected_depth, actual_d1, tolerance, L"findNthTerm (n=1)_Глибина");
            Assert::AreEqual(expected_sum, actual_sum, tolerance, L"findSum (n=1)_Значення");
            Assert::AreEqual(expected_depth, actual_d2, tolerance, L"findSum (n=1)_Глибина");
        }
    };
}