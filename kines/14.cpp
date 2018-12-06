#include <iostream>
#include <cstdlib>
#include <cmath>

/*Вариант 11.
–     Объявить класс CorMnGran (правильный многогранник) с квадратом в основании. Квадрат  задается длиной стороны.
– Определить  конструктор с одним действительным параметром.
– методы:
     – периметр perimetr() основания
     – площадь area() основания
     – объем многогранника
– В методе main() протестировать все определенные Вами методы  */

using namespace std;

class CorMnGran
{
double R;
public:
CorMnGran();
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
CorMnGran obj;
P=obj.Perimetr();
S=obj.Area();
V=obj.Vol(P,S);
cout<<"Периметр:"<<P<<" "<<"Площадь :"<<S<<" Объем :"<<V;
return 0;
}
CorMnGran::CorMnGran() /* конструктор */
{
	cout << "\n\nВведите сторону: ";
	cin >>R;
}
double CorMnGran::Perimetr()//отложенное опр-ние функции вычисления периметра
{
	return R*4;
}
double CorMnGran::Area()//отложенное опр-ние функции вычисления площади
{
	return R*R;
}
double CorMnGran::Vol(int P,int S)
{
	return R*R*R;
}
