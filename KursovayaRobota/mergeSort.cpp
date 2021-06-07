#include "mergeSort.h"

void mergeSort::merge(int down, int mid, int up, bool order)
{
	int num1 = mid - down + 1;
	int num2 = up - mid;

	int* A1 = new int[num1];
	int* A2 = new int[num2];
	for (int i = 0; i < num1; i++)
	{
		A1[i] = arr[down + i];
	}
	for (int j = 0; j < num2; j++)
	{
		A2[j] = arr[mid + j + 1];
	}

	int i = 0;
	int j = 0;
	int k = down;

	if (order)
	{
		while ((i < num1) && (j < num2))
		{
			if (A1[i] <= A2[j])
			{
				swap(arr + k, A1 + i);
				i++;
			}
			else
			{
				swap(arr+k, A2+j);
				j++;
			}
			k++;
			swap_count--;
			compare_count++;
		}
	}
	else
	{
		while ((i < num1) && (j < num2))
		{
			if (A1[i] >= A2[j])
			{
				swap(arr + k, A1 + i);
				i++;
			}
			else
			{
				swap(arr + k, A2 + j);
				j++;
			}
			k++;
			compare_count++;
		}
	}

	while (i < num1)
	{
		swap(arr + k, A1 + i);
		i++;
		k++;
		swap_count--;
	}

	while (j < num2)
	{
		swap(arr + k, A2 + j);
		j++;
		k++;
		swap_count--;
	}
	delete[] A1;
	delete[] A2;
}

void mergeSort::merge_sort(int down, int up, bool order)
{
	if (down < up)
	{
		int mid = down + (up - down) / 2;
		merge_sort(down, mid, order);
		merge_sort(mid + 1, up, order);
		merge(down, mid, up, order);
	}
}

void mergeSort::init_sort(bool order)
{
	Start_Timer();
	merge_sort(0, number_of_elements - 1, order);
	time_of_sort = Reveal_Timer();
}