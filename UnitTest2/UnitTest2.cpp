#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z = f(25, 1);
			Assert::AreEqual(24.05, z, 0.01);

		}
	};
	
}
