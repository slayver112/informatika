#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "C:\\Users\\vyach\\source\\repos\\UnitTest4\\123123\\123e.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(Test_SortedArray)
        {
            vector<int> a = { 1,2,3,4,5 };
            vector<int> copy = a;
            long long result = mergeSort(copy, 0, copy.size() - 1);
            Assert::AreEqual(0LL, result);
        }

        TEST_METHOD(Test_ReverseSorted)
        {
            vector<int> a = { 5,4,3,2,1 };
            vector<int> copy = a;
            long long result = mergeSort(copy, 0, copy.size() - 1);
            Assert::AreEqual(10LL, result);
        }

        TEST_METHOD(Test_3Elements)
        {
            vector<int> a = { 3,2,1 };
            vector<int> copy = a;
            long long result = mergeSort(copy, 0, copy.size() - 1);
            Assert::AreEqual(3LL, result);
        }

        TEST_METHOD(Test_2Elements)
        {
            vector<int> a = { 2,1 };
            vector<int> copy = a;
            long long result = mergeSort(copy, 0, copy.size() - 1);
            Assert::AreEqual(1LL, result);
        }

        TEST_METHOD(Test_FromExample)
        {
            vector<int> a = { 2,3,9,2,9 };
            vector<int> copy = a;
            long long result = mergeSort(copy, 0, copy.size() - 1);
            Assert::AreEqual(2LL, result);
        }
    };
}