#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.1/lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(-1, 0, 1);
			Assert::AreEqual(c, 0.);
		}
	};
}
