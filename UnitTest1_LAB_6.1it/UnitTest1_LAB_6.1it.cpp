#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.1it/lab_6.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB61it
{
	TEST_CLASS(UnitTest1LAB61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Number(b, 5);
			Assert::AreEqual(3, result);

		}
	};
}
