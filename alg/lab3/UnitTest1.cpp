#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "C:\Users\vyach\source\repos\asdasd\asdasd\asdasd.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
    TEST_CLASS(QuickSortTests)
    {
    public:
        TEST_METHOD(TestQuickSort_RegularArray)
        {
            std::vector<int> arr = {64,34,25,12,22,11,90};
            std::vector<int> expected = {11,12,22,25,34,64,90};
            if (!arr.empty()) {
                quickSort(arr, 0, (int)arr.size() - 1);
            }
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestQuickSort_AlreadySorted)
        {
            std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
            std::vector<int> expected = {1,2,3,4,5,6,7,8,9,10};
            if (!arr.empty()) {
                quickSort(arr, 0, (int)arr.size() - 1);
            }
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestQuickSort_ReverseSorted)
        {
            std::vector<int> arr = {10,9,8,7,6,5,4,3,2,1};
            std::vector<int> expected = {1,2,3,4,5,6,7,8,9,10};
            if (!arr.empty()) {
                quickSort(arr, 0, (int)arr.size() - 1);
            }
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestQuickSort_AllEqual)
        {
            std::vector<int> arr = {5,5,5,5,5,5};
            std::vector<int> expected = {5,5,5,5,5,5};
            if (!arr.empty()) {
                quickSort(arr, 0, (int)arr.size() - 1);
            }
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestQuickSort_SingleElement)
        {
            std::vector<int> arr = {42};
            std::vector<int> expected = {42};
            if (!arr.empty()) {
                quickSort(arr, 0, 0);
            }
            Assert::AreEqual(expected[0], arr[0]);
        }
        TEST_METHOD(TestQuickSort_EmptyArray)
        {
            std::vector<int> arr = {};
            Assert::AreEqual((size_t)0, arr.size());
        }
        TEST_METHOD(TestQuickSort_TwoElements)
        {
            std::vector<int> arr = {2,1};
            std::vector<int> expected = {1,2};
            if (!arr.empty()) {
                quickSort(arr, 0, (int)arr.size() - 1);
            }
            Assert::AreEqual(expected[0], arr[0]);
            Assert::AreEqual(expected[1], arr[1]);
        }
    };
    TEST_CLASS(RadixSortTests)
    {
    public:
        TEST_METHOD(TestRadixSort_RegularArray)
        {
            std::vector<int> arr = {170,45,75,90,2,802,24,66};
            std::vector<int> expected = {2,24,45,66,75,90,170,802};
            radixSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestRadixSort_ReverseSorted)
        {
            std::vector<int> arr = {10,9,8,7,6,5,4,3,2,1};
            std::vector<int> expected = {1,2,3,4,5,6,7,8,9,10};
            radixSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestRadixSort_AllEqual)
        {
            std::vector<int> arr = {5,5,5,5,5,5};
            std::vector<int> expected = {5,5,5,5,5,5};
            radixSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestRadixSort_SingleElement)
        {
            std::vector<int> arr = {42};
            std::vector<int> expected = {42};
            radixSort(arr);
            Assert::AreEqual(expected[0], arr[0]);
        }
        TEST_METHOD(TestRadixSort_EmptyArray)
        {
            std::vector<int> arr = {};
            std::vector<int> expected = {};
            radixSort(arr);
            Assert::AreEqual(expected.size(), arr.size());
        }
        TEST_METHOD(TestRadixSort_TwoElements)
        {
            std::vector<int> arr = {2,1};
            std::vector<int> expected = {1,2};
            radixSort(arr);
            Assert::AreEqual(expected[0], arr[0]);
            Assert::AreEqual(expected[1], arr[1]);
        }
    };
    TEST_CLASS(CombSortTests)
    {
    public:
        TEST_METHOD(TestCombSort_RegularArray)
        {
            std::vector<int> arr = {64,34,25,12,22,11,90};
            std::vector<int> expected = {11,12,22,25,34,64,90};
            combSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestCombSort_AlreadySorted)
        {
            std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
            std::vector<int> expected = {1,2,3,4,5,6,7,8,9,10};
            combSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestCombSort_ReverseSorted)
        {
            std::vector<int> arr = {10,9,8,7,6,5,4,3,2,1};
            std::vector<int> expected = {1,2,3,4,5,6,7,8,9,10};
            combSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestCombSort_AllEqual)
        {
            std::vector<int> arr = {5,5,5,5,5,5};
            std::vector<int> expected = {5,5,5,5,5,5};
            combSort(arr);
            for (int i = 0; i < arr.size(); i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }
        TEST_METHOD(TestCombSort_SingleElement)
        {
            std::vector<int> arr = {42};
            std::vector<int> expected = {42};
            combSort(arr);
            Assert::AreEqual(expected[0], arr[0]);
        }
        TEST_METHOD(TestCombSort_EmptyArray)
        {
            std::vector<int> arr = {};
            std::vector<int> expected = {};
            combSort(arr);
            Assert::AreEqual(expected.size(), arr.size());
        }
        TEST_METHOD(TestCombSort_TwoElements)
        {
            std::vector<int> arr = {2,1};
            std::vector<int> expected = {1,2};
            combSort(arr);
            Assert::AreEqual(expected[0], arr[0]);
            Assert::AreEqual(expected[1], arr[1]);
        }
    };
}