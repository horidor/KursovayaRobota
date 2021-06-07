#include "InFILE.h"
#include <iostream>
#include <fstream>
#include <string>

void InFILE::One_to_Inside(int* arr1, int number_of_elements1)
{
	number_of_elements = number_of_elements1;

	arr = new int[number_of_elements];

	for (int i = 0; i < number_of_elements; i++)
	{
		arr[i] = arr1[i];
	}
}

void InFILE::getInFILE()
{
	std::ofstream output("OutputInFILE.txt"); //��������� � ����
	for (int i = 0; i < number_of_elements; i++)
	{
		output << std::to_string(arr[i]) << " ";
	}
	output << '\n' << std::endl;

	output << "��� ����������: " << std::to_string(time_of_sort) << " ���." << std::endl;
	output << "ʳ����� ��������: " << std::to_string(compare_count) << std::endl;
	output << "ʳ������ ������������: " << std::to_string(swap_count) << std::endl;
}