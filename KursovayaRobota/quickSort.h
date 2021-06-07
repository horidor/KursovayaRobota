#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "sort_main.h"

class quickSort : public sort_main
{
protected:
	int partition(int down, int	up, bool increase);
	void quick_sort(int down, int up, bool order);
public:
	quickSort() : sort_main(arr, number_of_elements)
	{
		draw_index = new int[2];
		draw_index[0] = 1;
		draw_index[1] = 2;
	}

	void init_sort(bool order);

	~quickSort()
	{
	}
};

#endif