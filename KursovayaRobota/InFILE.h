#ifndef INFILE_H
#define INFILE_H

class InFILE //класс праці із файлом
{
private:
	int* arr;
	int number_of_elements, compare_count, swap_count;
	double time_of_sort;

	void One_to_Inside(int* arr1, int number_of_elements1);
public:
	InFILE() // конструктори
	{
		arr = nullptr;
	}

	InFILE(int* arr, int number_of_elements, double time_of_sort, int compare_count, int swap_count)
	{
		One_to_Inside(arr, number_of_elements);
		this->time_of_sort = time_of_sort;
		this->compare_count = compare_count;
		this->swap_count = swap_count;
	}
	void setInFILE(int* arr, int number_of_elements, double time_of_sort, int compare_count, int swap_count) //сеттер
	{
		One_to_Inside(arr, number_of_elements);
		this->time_of_sort = time_of_sort;
		this->compare_count = compare_count;
		this->swap_count = swap_count;
	}

	void getInFILE();
};

#endif

