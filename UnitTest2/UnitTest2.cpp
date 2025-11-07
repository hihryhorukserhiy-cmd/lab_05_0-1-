#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_1/lab_05_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 1.0;
			double b = 0.0;


			double expected = 1.0; // значення яке б мала надати функція h для цих вхідних даних	

			double actual = h(a, b);


			double tolerance = 0.0000001; // допустима похибка	
			Assert::AreEqual(expected, actual, tolerance);
		}
	};
}
