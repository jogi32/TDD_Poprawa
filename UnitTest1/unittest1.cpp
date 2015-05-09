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

	};
}