#include <cassert>
#include <iostream>
#include "TestUtils.h"
#include "Utils.h"


void cpp_class4_test::testGetRandomPrimeInteger()
{
	const int primeNumber = cpp_class4::getRandomPrimeInteger();
	assert(primeNumber && primeNumber != 1);
	if (primeNumber<100) {
		std::cout<< "PRIME  "<<primeNumber << std::endl;
		bool primeFound = false;
		for (unsigned int i = 0;i<25;i++) {
			if (primeNumber == primeNumsFromZeroToOneHundred[i]) {
				primeFound = true;
				break;
			}
		}
		assert(primeFound);
	}
}

void cpp_class4_test::testGetLanguageCreator()
{
	char cppCreator[17] = {'B','j','a','r','n','e',' ','S','t','r','o','u','s','t','r','u','p'};
	const char* creator = cpp_class4::getLanguageCreator(cpp_class4::Language::CPP);
	for (unsigned int i = 0;i<17;i++) {
		assert(cppCreator[i] == creator[i]);
	}
	
}

void cpp_class4_test::testFindFirstOccurence()
{
	int mockArray[10] = {9,86,64,32,86,0,2,12,41,89};
	int targeIndex = 0;
	int &targeIndexRef = targeIndex;
	bool occurence=cpp_class4::findFirstOccurence(mockArray,10,86,true,targeIndexRef);
	assert(occurence&& targeIndexRef==4);
}
