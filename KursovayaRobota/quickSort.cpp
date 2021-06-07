#include "quickSort.h"

int quickSort::partition(int down, int	up, bool increase) //алгоритм швидкого сортування - було використане розбиття Хоара
{
	bool flag = true;
	int pivot = arr[(down + up) / 2];
	int i = down - 1;
	int j = up + 1;
	if (increase)
	{
		while (flag)
		{
			i++;
			while (arr[i] < pivot)
			{
				i++;
				compare_count++;
			}
			compare_count++;

			j--;
			while (arr[j] > pivot)
			{
				j--;
				compare_count++;
			}
			compare_count++;
			compare_count++;
			if (i >= j)
			{
				flag = false;
			}

			else
			{
				swap(arr + i, arr + j);
				/*if (flag_draw)         //попытка реализовать визуализацию
				{
					draw_index[0] = i;
					draw_index[1] = j;
					toggle_wait();
					swait();
				}*/
			}
		}
	}
	else
	{
		while (flag)
		{
			i++;
			while (arr[i] > pivot)
			{
				i++;
				compare_count++;
			}
			compare_count++;

			j--;
			while (arr[j] < pivot)
			{
				j--;
				compare_count++;
			}
			compare_count++;
			compare_count++;
			if (i >= j)
			{
				flag = false;
			}

			else
			{
				draw_index[0] = i;
				draw_index[1] = j;
				swap(arr + i, arr + j);
				if (flag_draw)
				{

				}
			}
		}
	}
	return j;


}

//рекурсивне ділення
void quickSort::quick_sort(int down, int up, bool order)
{
	if (down < up)
	{
		int pivot = partition(down, up, order);
		quick_sort(down, pivot, order);
		quick_sort(pivot + 1, up, order);
	}
}

void quickSort::init_sort(bool order) //ініциалізація сортування
{
	compare_count = 0;
	swap_count = 0;
	Start_Timer();
	quick_sort(0, number_of_elements - 1, order);
	time_of_sort = Reveal_Timer();
}