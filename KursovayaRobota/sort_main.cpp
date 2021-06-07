#include "sort_main.h"


void sort_main::One_to_Inside(int* arr1, int number_of_elements1) //метод копіювання из одного масиву до внутрішнього, використовується бо побітове копіювання, яке
{																  //є стандартним, приводить до того, що зміни у одному масиві з'являються у іншому.
	number_of_elements = number_of_elements1;

	arr = new int[number_of_elements];

	for (int i = 0; i < number_of_elements; i++)
	{
		arr[i] = arr1[i];
	}
}


void sort_main::swap(int* i, int* j) //метод зміни місцями двох елемнтів (за адресою)
{
	int temp = *i;
	*i = *j;
	*j = temp;
	swap_count++;
}


// реалізація таймеру - для статистики
double sort_main::Reveal_Timer()  // показ часу на момент реалізації функції
{
	return TIME.elapsed();
}

void sort_main::Start_Timer() //нова точка відлику для таймера
{
	TIME.reset();
}

