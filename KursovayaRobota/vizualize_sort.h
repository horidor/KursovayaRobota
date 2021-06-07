#pragma once
#define NUMOF 1000

class vizualize_sort //не визуализирует, а скалирует значения для вывода на экран по 1000 пикселей
{
private:
	int* arr;
	int number_of_elements;
protected:
	int* arr_viz;
public:
	vizualize_sort()
	{
		arr = nullptr;
		arr_viz = new int[NUMOF];
		for (int i = 0; i < NUMOF; i++)
		{
			arr_viz[i] = 0;
		}
		number_of_elements = 0;
	}

	void SET(int* arr1, int number_of_elements)
	{
		if (arr != nullptr)
		{
			delete[] arr;
			this->number_of_elements = 0;
		}
		this->number_of_elements = number_of_elements;

		arr = new int[number_of_elements];
		for (int i = 0; i < number_of_elements; i++)
		{
			arr[i] = arr1[i];
		}
	}

	int* get_arr() { return arr; }

	int* get_Scaled() { return arr_viz; }
	
	void scale()
	{

		for (int i = 0; i < 1000; i++)
		{
			arr_viz[i] = arr[(number_of_elements * i) / NUMOF];
		}
		int max = arr_viz[0];
		for (int i = 1; i < 1000; i++)
		{
			if (arr_viz[i] > max) max = arr_viz[i];
		}
		if (max >= 800)
		{
			for (int i = 0; i < 1000; i++)
			{
				arr_viz[i] = arr_viz[i] * 800 / max;
			}
		}
	}
};

