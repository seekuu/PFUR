//Volshikov NI-202
/*В массиве из n чисел подсчитать сумму элементов, стоящих на четных местах. */
#include <iostream>
//#include <conio.h>
#define LEN 100
using namespace std;

class A{//Объявление класса Q //Объявление член-данных private:
int mas[LEN];//массив целых чисел;
int kol;//текущий размер массива
//Объявление член-функций (методов)
public:
void Enter();//Объявление член-функции ввода
void Output();//Объявление член-функции вывода
int Max();
int cnt();/*объявление член-функции нахождения максимального элемента массива */
};//конец объявления класс Q

int main()
{
A obj;//Создание объекта
obj.Enter();//Ввод данных
obj.Output();//Вывод данных
obj.cnt();
//m=obj.Max();
return 0;
}
void A::Enter()//функция ввода данных
{
kol=-1;
cout <<"\nVvedite pazmer massiva kol=\b";
/* ввод размера массива */
cin>>kol;
while(kol<0)cin>>kol;
cout <<"\nVvedite massive chisel:\n";
for(int i=0;i<kol;i++)// цикл ввода массива
{
cout<<"Vvedite mas["<<(i+1)<<"]=\b";
cin>>mas[i];
cout <<endl;
}
}

void A::Output()/* отложенное опреасление функции вывода массива о6ъекта   */
{
cout<<"\n\t Massive:"<<"\n\t--------------\n";
for(int i=0;i<kol;i++)//вывод массива
	cout<<mas[i]<<" ";
cout<<endl;
}

//block 3

int A::Max()/* отложенное определение функции нахождение max*/
{//Найти максимальный элемент из его элементов с нечетными номерами
cout<<"Nahozhdenie maximal'nogo elementa s nechetnim indexom";
int max=mas[0];
for(int i=1;i<kol;i+=2){
	if(max<mas[i])
		max=mas[i];
}
return(max);/*возврат в вызвавшую функцию значения max */
}
int A::cnt()
{
int s=0;
cout<<"Summa el-tov s chetnim indexom"<<endl;
for(int i =0 ;i<kol;i+=2)s+=mas[i];
cout<<endl<<"Summa : "<<s;
}
