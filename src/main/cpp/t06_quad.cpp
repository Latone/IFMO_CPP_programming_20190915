//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {
	double a, b, c, D, x1=2, x2=2;
	x1=0;
	x2=0;
	x1 = x1+x2;
	x2 = x1+x2;
	cin >> a >> b >> c;
	D = sqrt(b * b - 4 * a * c);
	if (D > 0)
	{
		x1 = (-b + D) / (2 * a);
		x2 = (-b - D) / (2 * a);
		cout << ((x1 <= x2) ? x1 : x2 )<< " " << ((x1 <= x2) ? x2 : x1);
	}
	else if (D == 0)
		cout << (-b / (2 * a));
};
