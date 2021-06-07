#ifndef SORT_MAIN_H
#define SORT_MAIN_H
#include "TimeCount.h"
#include <Windows.h>

class sort_main // клас сортування з основними методами для сортировок
{
protected:
	// атрибути - 
	int* arr;
	int number_of_elements;
	TimeCount TIME;
	double time_of_sort;
	int compare_count;
	int swap_count;
	bool flag_draw;
	bool flag_wait;
	int* draw_index;

	void One_to_Inside(int* arr1, int number_of_elements1);

public:
	sort_main()
	{
		arr = nullptr;
		number_of_elements = 0;
		time_of_sort = 0;
		compare_count = 0;
		swap_count = 0;
		flag_draw = false;
		flag_wait = false;
		draw_index = new int[2];
		draw_index[0] = 0;
		draw_index[1] = 0;
	}

	sort_main(int* A, int number_of_elements)
	{
		One_to_Inside(A, number_of_elements);
	}

	sort_main(const sort_main& obj) : sort_main(obj.arr, obj.number_of_elements)
	{

	}

	virtual void swap(int* i, int* j);


	int get_count() { return number_of_elements; } //геттери
	int* get_arr() { return arr; }
	double get_sort_time() { return time_of_sort; }
	int get_compare() { return compare_count; }
	int get_swap() { return swap_count; }
	bool get_flag_wait() { return flag_wait; }
	int* get_swap_indexes() { return draw_index; }

	// реалізація таймеру - для статистики
	double Reveal_Timer();  // показ часу на момент реалізації функції
	
	void Start_Timer(); //нова точка відлику для таймера
	
	void SET(int* arr, int number_of_elements) //сеттер
	{
		if (this->number_of_elements > 0)
		{
			delete[] this->arr;				//звільнюємо місце для нового масиву
			this->number_of_elements = 0;
		}

		One_to_Inside(arr, number_of_elements);
	}
	
	/*void toggle_viz()											//тоже попытка реализовать визуализацию
	{
		flag_draw ? flag_draw = false : flag_draw = true;
	}

	void toggle_wait()
	{
		flag_wait ? flag_wait = false : flag_wait = true;
	}

	void swait()
	{
		while (flag_wait)
		{
		}
	}*/

	virtual void init_sort(bool order) //віртуальна функція початку сортування
	{
	}

	virtual ~sort_main() //віртуальний деструктор
	{
		delete[] arr;
		delete[] draw_index;
	}
};

#endif
