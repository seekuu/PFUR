//Kuzmin Sergey NI-202
#include <iostream>
#include <cstdlib>
#include <cmath>
#define LENROW 100
#define LENCOL 11
/*Вариант 5.
 Объявить класс CorTriangle треугольник  задается длиной стороны.
– Определить
– конструктор с одним действительным параметром.
– методы:
        	периметр perimetr() треугольника
        	площадь area() треугольника
Протестировать все определенные Вами методы.*/
using namespace std;

class CorTriangle
{
double n;
public:
CorTriangle();
double Perimetr();
double Area();
};

int main()
{
double P;
double S;
cout<<"Нахождения периметра и площади равностороннего треугольника"<<endl;
CorTriangle obj;
P=obj.Perimetr();
S=obj.Area();
cout<<"Периметр:"<<P<<" "<<"Площадь :"<<S;
return 0;
}
CorTriangle::CorTriangle() /* конструктор */
{
	cout << "\n\nВведите длину стороны: ";
	cin >>n;
}

double CorTriangle::Perimetr()//отложенное опр-ние функции вычисления периметра
{
	return 3*n;
}
double CorTriangle::Area()//отложенное опр-ние функции вычисления площади
{
	return (sqrt(3)/4)*n*n;
}
