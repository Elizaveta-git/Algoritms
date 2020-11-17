#include "pch.h"
#include "CppUnitTest.h"
#include "..\laba2\SortingAlgoritms.h"
#include "..\laba2\SortingAlgoritms.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
const char Array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

namespace SortingAlgoritmsTests
{
	TEST_CLASS(SortingAlgoritmsTests)
	{
	public:

		int* arr;
		char* CharArr;

		TEST_METHOD_INITIALIZE(setUp)
		{
			arr = new int[5];
			CharArr = new char[5];
		}

		TEST_METHOD_CLEANUP(cleanUp)
		{
			delete arr;
			delete CharArr;
		}
		
		//////QUICK//SORT//////
		TEST_METHOD(Quicksort_first)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			QuickSort(arr, 0, 4);
			Assert::AreEqual(arr[0], 1);
		}
		TEST_METHOD(Quicksort_mid)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			QuickSort(arr, 0, 4);
			Assert::AreEqual(arr[2], 4);
		}
		TEST_METHOD(Quicksort_last)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			QuickSort(arr, 0, 4);
			Assert::AreEqual(arr[4], 10);
		}
		//////INSERTION//SORT//////
		TEST_METHOD(InsertionSort_first)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			InsertionSort(arr, 5);
			Assert::AreEqual(arr[0], 1);
		}
		TEST_METHOD(InsertionSort_mid)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			InsertionSort(arr, 5);
			Assert::AreEqual(arr[2], 4);
		}
		TEST_METHOD(InsertionSort_last)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			InsertionSort(arr, 5);
			Assert::AreEqual(arr[4], 10);
		}
		//////BOGO//SORT//////
		TEST_METHOD(BogoSort_first)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			BogoSort(arr, 5);
			Assert::AreEqual(arr[0], 1);
		}
		TEST_METHOD(BogoSort_mid)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			BogoSort(arr, 5);
			Assert::AreEqual(arr[2], 4);
		}
		TEST_METHOD(BogoSort_last)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			BogoSort(arr, 5);
			Assert::AreEqual(arr[4], 10);
		}
		//////BINARY//SEARCH//////
		TEST_METHOD(BinarySearch_first)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			Assert::AreEqual(BinarySearch(arr, 1, 5), 0);
		}
		TEST_METHOD(BinarySearch_mid)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			Assert::AreEqual(BinarySearch(arr, 4, 5), 2);
		}
		TEST_METHOD(BinarySearch_last)
		{
			arr[0] = { 5 };
			arr[1] = { 1 };
			arr[2] = { 4 };
			arr[3] = { 2 };
			arr[4] = { 10 };
			Assert::AreEqual(BinarySearch(arr, 10, 5), 4);
		}
		//////COUNTING//SORT//////
		TEST_METHOD(CountingSort_first)
		{
			CharArr[0] = Array[25];//Y
			CharArr[1] = Array[40];//n
			CharArr[2] = Array[27];//a
			CharArr[3] = Array[3];//C
			CharArr[4] = Array[30];//d
			CountingSort(CharArr, 5);
			Assert::AreEqual(CharArr[0], Array[3]);
		}
		TEST_METHOD(CountingSort_mid)
		{
			CharArr[0] = Array[25];//Y
			CharArr[1] = Array[40];//n
			CharArr[2] = Array[30];//d
			CharArr[3] = Array[3];//C
			CharArr[4] = Array[27];//a
			CountingSort(CharArr, 5);
			Assert::AreEqual(CharArr[2], Array[27]);
		}
		TEST_METHOD(CountingSort_last)
		{
			CharArr[0] = Array[25];//Y
			CharArr[1] = Array[40];//n
			CharArr[2] = Array[27];//a
			CharArr[3] = Array[3];//C
			CharArr[4] = Array[30];//d
			CountingSort(CharArr, 5);
			Assert::AreEqual(CharArr[4], Array[40]);
		}
	};
}
