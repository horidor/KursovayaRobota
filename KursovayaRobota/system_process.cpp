#include "system_process.h"
#include <iostream>

void system_process::One_to_Other(int* arr1, int* arr2, int number_of_elements)
{
	for (int i = 0; i < number_of_elements; i++)
	{
		arr1[i] = arr2[i];
	}
}

void system_process::Display_Array()
{
	for (int i = 0; i < number_of_elements; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void system_process::Display_Sorted()
{
	for (int i = 0; i < number_of_elements; i++)
	{
		std::cout << arr_sort[i] << " ";
	}
	std::cout << std::endl;
}