//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
	int n = 0, last = -1, max = 0;
	bool recon = false;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		if (n > last && recon==false && last!=-1)
		{
			last = n;
			recon = true;
			continue;
		}
		else if(recon==true && n<last)
		{
			recon = false;
			max++;
		}

			last = n;
	}
	cout << max;
};