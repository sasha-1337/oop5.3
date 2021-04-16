#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.3\oop5.3\A.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			A a(1);
			int t = a.GetX();
			Assert::AreEqual(t, 1);
		}
	};
}
