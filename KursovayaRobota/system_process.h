#ifndef SYSTEM_PROCESS_H
#define SYSTEM_PROCESS_H
#include <cstdlib>;
#include <ctime>;
#include <string>

class system_process
{
private:
	int* arr;
	int number_of_elements;
	int* arr_sort;
	std::string sort_type;

	void One_to_Other(int* arr1, int* arr2, int number_of_elements);

public:
	system_process()
	{
		arr = nullptr;
		arr_sort = nullptr;
		number_of_elements = 0;
		sort_type = "";
	}

	system_process(int number_of_elements)
	{
		arr_sort = nullptr;
		srand(time(NULL));
		this->number_of_elements = number_of_elements;
		arr = new int[number_of_elements];
		for (int i = 0; i < number_of_elements; i++)
		{
			arr[i] = rand() % 9999;
		}
	}
	
	void Gen_Array(int number_of_elements)
	{
		if (arr != nullptr)
		{
			delete[] arr;
		}
		srand(time(NULL));
		this->number_of_elements = number_of_elements;
		arr = new int[number_of_elements];
		for (int i = 0; i < number_of_elements; i++)
		{
			arr[i] = rand() % 9999;
		}
	}

	void Set_Sorted(int* arr, int number_of_elements)
	{
		if (arr_sort != nullptr)
		{
			delete[] arr_sort;
		}
		arr_sort = new int[number_of_elements];
		One_to_Other(arr_sort, arr, number_of_elements);
	}

	void Display_Array();

	void Display_Sorted();

	void Set_Sort_Type(std::string types)
	{
		sort_type = types;
	}

	std::string Get_Sort_Type()
	{
		return sort_type;
	}
	int* Get_Array()
	{
		return arr;
	}

	int* Get_Sorted()
	{
		return arr_sort;
	}

	int Get_Count()
	{
		return number_of_elements;
	}

	~system_process()
	{
		delete[]arr;
		delete[]arr_sort;
	}

};

#endif
