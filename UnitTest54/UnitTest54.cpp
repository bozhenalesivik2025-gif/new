#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/lab_5.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
	TEST_CLASS(SumCalculationTests)
	{
	public:

		TEST_METHOD(TestS0_WithSimpleValues)
		{
			const int K = 2;
			const int N = 4;
			double expected = 0.8;
			double actual = S0(K, N);

			Assert::AreEqual(expected, actual, 0.0001);
		}
	};
}