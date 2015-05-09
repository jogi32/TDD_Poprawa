#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\TDD_Poprawa\TDD_Poprawa.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(run)
		{
			LargestProduct test;
			Assert::AreEqual(1, test.run());
		}

		TEST_METHOD(publicCheckGreatness)
		{
			LargestProduct test;
			Assert::AreEqual(888, (int)test.publicCheckGreatness(888, 567));
			Assert::AreEqual(999, (int)test.publicCheckGreatness(999, 111));
			Assert::AreEqual(777, (int)test.publicCheckGreatness(555, 777));
		}

		TEST_METHOD(publicMultiplyNumbers)
		{
			LargestProduct test;
			Assert::AreEqual(5000940, (int)test.publicMultiplyNumbers(0, 1));
		}

	};
}