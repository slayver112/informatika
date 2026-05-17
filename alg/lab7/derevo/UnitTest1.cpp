#include "pch.h"
#include "CppUnitTest.h"
#include "C:\\Users\\vyach\\source\\repos\\UnitTest1\\tttttttttttt\\tttttttttttt.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(Test_n1)
        {
            int n = 1;
            long long result = factorial(2*n)/(factorial(n+1)*factorial(n));
            Assert::AreEqual(1LL, result);
        }

        TEST_METHOD(Test_n2)
        {
            int n = 2;
            long long result = factorial(2*n)/(factorial(n+1)*factorial(n));
            Assert::AreEqual(2LL, result);
        }

        TEST_METHOD(Test_n3)
        {
            int n = 3;
            long long result = factorial(2*n)/(factorial(n+1)*factorial(n));
            Assert::AreEqual(5LL, result);
        }

        TEST_METHOD(Test_n4)
        {
            int n = 4;
            long long result = factorial(2 * n)/(factorial(n + 1)*factorial(n));
            Assert::AreEqual(14LL, result);
        }

        TEST_METHOD(Test_n5)
        {
            int n = 5;
            long long result = factorial(2*n)/(factorial(n + 1)*factorial(n));
            Assert::AreEqual(42LL, result);
        }
    };
}