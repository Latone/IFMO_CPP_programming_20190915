//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. 
// На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1.
// На следующих двух диагоналях числа 2, и т.д. 
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//0 1 2 3 4
//1 0 1 2 3
//2 1 0 1 2
//3 2 1 0 1
//4 3 2 1 0

#include "t03_diag.h"
#include <iostream>
#include <cmath>


using namespace std;

int t03_diag() {
	int a, x[101][101],place=0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int begin = -place;
		for (int j = 0; j < a; j++)
		{
			cout << abs(begin)<< " ";
			begin++;
		}
		place++;
		cout << endl;
	}
}