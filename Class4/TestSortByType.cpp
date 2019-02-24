#include <cassert>
#include "Utils.h"
#include "TestSortByType.h"

void cpp_class4_test::testSortByType()
{
	int mockArray[10] = {1,4,5,1,25,13,6,7,89,52};
	int expectedResult[10] = {1,1,4,5,6,7,13,25,52,89};
	cpp_class4::sortByType(mockArray,10,cpp_class4::SortType::MERGE);
	assertTwoArrays(mockArray,expectedResult,10);
}

void cpp_class4_test::testBubbleSort()
{
	int mockArray[10] = { 34,125,267,23,79,-23,-235,26,78,122};
	int expectedResult[10] = {-235,-23,23,26,34,78,79,122,125,267};
	cpp_class4::bubbleSort(mockArray, 10);
	assertTwoArrays(mockArray, expectedResult, 10);
}

void cpp_class4_test::testQuickSort()
{
	int mockArray[10] = { 34,125,267,23,79,-23,-235,26,78,122 };
	int expectedResult[10] = { -235,-23,23,26,34,78,79,122,125,267 };
	cpp_class4::quickSort(mockArray,0,9);
	assertTwoArrays(mockArray, expectedResult, 10);
}

void cpp_class4_test::testMergeSort()
{
	int mockArray[10] = { 34,125,267,23,79,-23,-235,26,78,122 };
	int expectedResult[10] = { -235,-23,23,26,34,78,79,122,125,267 };
	cpp_class4::mergeSort(mockArray, 0,9);
	assertTwoArrays(mockArray, expectedResult, 10);
}

void cpp_class4_test::assertTwoArrays(int* array1,int* array2, unsigned int length)
{
	for (unsigned int i=0;i<length;i++) {
		assert(array1[i]== array2[i]);
	}
}
