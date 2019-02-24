#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Utils.h"


void cpp_class4::merge(int *A, int low, int high, int mid)
{
	assert(A);
	int i, j, k, c[50];
	i = low;
	k = low;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (A[i] < A[j])
		{
			c[k] = A[i];
			k++;
			i++;
		}
		else
		{
			c[k] = A[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		c[k] = A[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		c[k] = A[j];
		k++;
		j++;
	}
	for (i = low; i < k; i++)
	{
		A[i] = c[i];
	}
}

void cpp_class4::mergeSort(int *a, int low, int high)
{
	assert(a);
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);

		merge(a, low, high, mid);
	}

}

void cpp_class4::printIntArray(const int * intArray, unsigned int length)
{
	assert(intArray);
	for (unsigned int i = 0; i<length; i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;
}

void cpp_class4::swap(int * a, int * b)
{
	assert(a&&b);
	int t = *a;
	*a = *b;
	*b = t;
}

int cpp_class4::partition(int * myArray, int low , int high)
{
	assert(myArray);
	int pivot = myArray[high]; 
	int i = (low - 1); 

	for (unsigned int j = low; j <= high - 1; j++)
	{
		if (myArray[j] <= pivot)
		{
			i++;  
			swap(&myArray[i], &myArray[j]);
		}
	}
	swap(&myArray[i + 1], &myArray[high]);
	return (i + 1);
}

void cpp_class4::quickSort(int * myArray, int low ,int high)
{
	assert(myArray);
	if (low < high)
	{
		int pi = partition(myArray, low, high);
		quickSort(myArray, low, pi - 1);
		quickSort(myArray, pi + 1, high);
	}
	
}


void cpp_class4::bubbleSort(int * myArray, unsigned int length)
{
	assert(myArray);
	for (unsigned int i = 1; i < length; ++i) {
		for (unsigned int j = 0; j < (length - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

void cpp_class4::sortByType(int * myArray, unsigned int length, SortType sortType)
{
	assert(myArray);
	if (sortType == SortType::BUBBLE) {
		bubbleSort(myArray,length);
	}
	else if (sortType== SortType::MERGE) {
		quickSort(myArray,0,length-1);
	}
	else {
		mergeSort(myArray,0,length-1);
	}
}

bool cpp_class4::findFirstOccurence(int * myArray, unsigned int length, int target, bool beginEnd, int & targetIndex)
{
	assert(myArray);
	if (beginEnd){
		for (unsigned int i = length-1; i >= 0; i--)
		{
			if (myArray[i]==target) {
				targetIndex = i;
				return true;
			}
		}
	}else {
		for (unsigned int i = 0; i < length; i++)
		{
			if (myArray[i] == target) {
				targetIndex = i;
				return true;
			}
		}
	}
	return false;
}

bool cpp_class4::isPrime(int number)
{
	assert(number>=0);
	if (number == 0 || number == 1) {
		return false;
	}
	bool bIsPrime = true;
	for (unsigned int i = 2; i <= number / 2; i++){
		if (number % i == 0)
		{
			bIsPrime = false;
			break;
		}
	}
	return bIsPrime;
}

int cpp_class4::getRandomPrimeInteger()
{
	srand(static_cast<unsigned int>(time(NULL)));
	int primeNumber; 
	do {
	primeNumber	= rand();
	} while ( !isPrime(primeNumber) );
	return primeNumber;
}

const char * cpp_class4::getLanguageCreator(cpp_class4::Language language) {

	switch (language)
	{
	case Language::C:
			return "Dennis Ritchie";
			break;
	case Language::COBOL:
		return "comision CODASYL";
		break;
	case Language::CPP:
		return "Bjarne Stroustrup";
		break;
	case Language::CSHARP:
		return "Anders Hejlsberg";
		break;
	case Language::HTML :
		return "Tim Berners-Lee";
		break;
	case Language::JAVA :
		return "James Gosling";
		break;
	case Language::PYTHON:
		return "Guido van Rossum";
		break;
	case Language::RUBY :
		return "Yukihiro Matsumoto";
		break;
	default:
		return nullptr;
		break;
	}

};