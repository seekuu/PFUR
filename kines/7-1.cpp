//Nesin NI-202
#include <iostream>
//#include <conio.h>
#include <cmath>
/*11. Дан массив A размера N. Упорядочить его элементы в следующем порядке: A1, AN, A2, AN–1, A3, AN–2,…*/
using namespace std;

class Q//Объявление класcа Q
{//Объявление член-данных
private:
int mas[100];//массив целых чисел
int kol;//текущий размер массива
int ch,nch;
//Объявление член-функций (методов)
public:
void Enter();//Объявление член-функции ввода данных
void output();//Обьявление член-функции вывода данных
int *funk(int&);//объявление член-функции упорядочивания всех четных элементов массива   */
};//конец объявления класс Q

int main()
{
cout<<"Uporyadochit' maasiv po usloviyu"<<endl;
Q obj;// Объявление объекта
int *p_k,i;// указатель на массив объекта для вывода результата
int n;// размер распечатаемого массива в объекте
obj.Enter();// ввод данных в объект
obj.output();//Вывод данных   obj
p_k=obj.funk(n);//сортировка четных элементов массива
cout<<"\n\nYporaydocheny massiv obj\n";
for (int i=0; i<n; i++)
cout<<p_k[i]<<"   ";//проверочная печать массива объекта cout<<"\n pechat massiva dla proverki";
obj.output();
return 0;
}

void Q::Enter()//отложенное опр-ние функции ввода данных
{
kol=0;
ch=0;
nch=0;
cout <<"\nVvedite pazmer massiva kol=       \b\b\b\b";
cin>>kol;
cout <<"\nVvedite massive:\n";
for(int i=0;i<kol;i++){
  cout <<"Vvedite mas["<<(i+1)<<"]=	\b\b\b\b";
  cin >>mas[i];
  if(mas[i]%2==0 and mas[i]<0)ch++;
  else nch++;
  cout <<endl;}
}

void Q::output()
{
cout <<"\n\t Massive:" <<"\n\t	\n";
for(int i=0; i<kol; i++)
cout<<mas[i]<<"   ";
}

int *Q::funk(int& n1)/*определение функции упорядочивания четных элементов массива */
{
	cout << "Preobrazovanniy massiv : ";
	    int i = 0;
	    while(i <= kol/2 - 1){
	        cout << mas[i] << " " << mas[kol - 1 - i] << " ";
	        i++;
	    }
	    if(kol % 2 != 0)
	        cout << mas[i];

}
