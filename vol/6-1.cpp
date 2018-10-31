//Volshikov NI-202

/*3. В массиве из n чисел найти индекс первого нулевого элемента и сумму элементов до этого элемента.*/
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
int k=0,i=0;
cout<<"Suuma elementov do pervogo nulevogo elementa"<<endl;
while(mas[i]!=0){
	k+=mas[i];
	i++;
}
cout<<"Summa elementov do nulya : "<<k<<" Index : "<<i-1;
}
