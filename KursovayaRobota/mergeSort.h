#ifndef MERGESORT_H
#define MERGESORT_H
#include "sort_main.h"

class mergeSort : public sort_main
{
protected:
	void merge(int down, int mid, int up, bool order);
	void merge_sort(int down, int up, bool order);

public:
	mergeSort() : sort_main(arr, number_of_elements)
	{
	}

	void init_sort(bool order);

	~mergeSort()
	{
	}
};

#endif

