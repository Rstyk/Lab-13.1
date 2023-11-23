#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 13.1/var.cpp"
#include "../Laba 13.1/var.h"
#include "../Laba 13.1/sum.h"
#include "../Laba 13.1/dod.h"
#include "../Laba 13.1/dod.cpp"
#include "../Laba 13.1/sum.cpp"
using namespace nsSum;
using namespace nsVar;
using namespace nsDod;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab131
{
	TEST_CLASS(lab131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x_p = 0.0;
			x_k = 1.0;
			dx = 0.2;
			e = 0.01;

			x = x_p;
			sum();
			Assert::AreEqual(s, atan(x));

		}
	};
}
