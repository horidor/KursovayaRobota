#include "sort_main.h"


void sort_main::One_to_Inside(int* arr1, int number_of_elements1) //����� ��������� �� ������ ������ �� �����������, ��������������� �� ������� ���������, ���
{																  //� �����������, ��������� �� ����, �� ���� � ������ ����� �'��������� � ������.
	number_of_elements = number_of_elements1;

	arr = new int[number_of_elements];

	for (int i = 0; i < number_of_elements; i++)
	{
		arr[i] = arr1[i];
	}
}


void sort_main::swap(int* i, int* j) //����� ���� ������ ���� ������� (�� �������)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	swap_count++;
}


// ��������� ������� - ��� ����������
double sort_main::Reveal_Timer()  // ����� ���� �� ������ ��������� �������
{
	return TIME.elapsed();
}

void sort_main::Start_Timer() //���� ����� ������ ��� �������
{
	TIME.reset();
}

