#ifndef TESTUTILS_H
#define TESTUTILS_H
#define ARRAY_SIZE 10
#include "Utils.h"

namespace cpp_class4_test {
	const unsigned int primeNumsFromZeroToOneHundred[]=
		{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 , 97 };
	void testGetRandomPrimeInteger();
	void testGetLanguageCreator();
	void testFindFirstOccurence();
}

#endif // !TESTUTILS_H

