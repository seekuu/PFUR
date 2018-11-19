#include <iostream>
#include <cstdlib>
#include <cmath>

/*Вариант 4.
– Объявить класс SpaseFigure (фигура в 3-х мерном пространстве с кругом в основании)  Фигура  задается радиусом основания и высотой.
– Определить
– конструктор с двумя действительными параметрами.
– методы:
        	периметр perimetr() основания
        	площадь area() основания
        	объем  фигуры
– В методе main() протестировать все определенные Вами методы.*/

using namespace std;

class SpaceFigure
{
double R,h;
public:
SpaceFigure();
double Perimetr();
double Area();
double Vol(int,int);
};

int main()
{
double P;
double S;
double V;
cout<<"Нахождение периметра(основания), площади(основания) и объема цилиндра"<<endl;
SpaceFigure obj;
P=obj.Perimetr();
S=obj.Area();
V=obj.Vol(P,S);
cout<<"Периметр:"<<P<<" "<<"Площадь :"<<S<<" Объем :"<<V;
return 0;
}
SpaceFigure::SpaceFigure() /* конструктор */
{
	cout << "\n\nВведите радиус основания: ";
	cin >>R;
	cout << "\n\nВведите высоту фигуры: ";
	cin >>h;
}

double SpaceFigure::Perimetr()//отложенное опр-ние функции вычисления периметра
{
	return 2*3.14*R;
}
double SpaceFigure::Area()//отложенное опр-ние функции вычисления площади
{
	return pow(R,2)*3.14;
}
double SpaceFigure::Vol(int P,int S)
{
	return P*S;
}


