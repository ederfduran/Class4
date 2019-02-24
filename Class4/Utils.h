#ifndef UTILS_H
#define UTILS_H

namespace cpp_class4 {
	enum Language {
		CPP=0,
		C,
		JAVA,
		PYTHON,
		COBOL,
		CSHARP,
		HTML,
		RUBY
	};
	enum SortType {
		BUBBLE = 0,
		QUICK,
		MERGE
	};

	void merge(int *arr, int l, int m, int r);
	void printIntArray(const int *, unsigned int);
	void swap(int* , int* );
	int partition(int* , int,int );
	void bubbleSort(int * , unsigned int );
	void quickSort(int *, int,int);
	void mergeSort(int *, int,int);
	void sortByType(int *,unsigned int length, SortType);
	bool findFirstOccurence(int*,unsigned int,int,bool,int&);
	bool isPrime(int);
	int getRandomPrimeInteger();
	const char* getLanguageCreator(Language);
}

#endif // !UTILS_H

