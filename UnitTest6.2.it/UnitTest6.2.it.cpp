#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2.it/PR6.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int a[5] = { 2,5,4,3,6 };
			int index= maxEvenIndex(a, 5);
			Assert::AreEqual(4, index);
		}
	};
}
