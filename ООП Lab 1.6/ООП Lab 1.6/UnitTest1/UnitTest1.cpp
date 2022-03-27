#include "pch.h"
#include "CppUnitTest.h"
#include "../ООП Lab 1.6/Complex.h"
#include "../ООП Lab 1.6/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex::Pair a;
			int c = a.Suma1(2, 4);
			Assert::AreEqual(c, 6);

		}
	};
}
