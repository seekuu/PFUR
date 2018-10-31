
//Volshikov NI-202
/* 2. Дан целочисленный массив размера N. Переместить в начало массива все содержащиеся в нем нечетные числа в порядке возрастания их индексов.*/
#include <iostream>
#define LEN 100

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
cout<<"Peremeshenie nechetnih el-tov v nachalo massiva"<<endl;
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
int per=0;
for(int i=kol-1;i>=0;i--)
{
	if(mas[i]%2==1){
		for(int j=0;j<i;j++){
			if(mas[j]%2==0){
				per=mas[i];
				mas[i]=mas[j];
				mas[j]=per;
				output();
				break;
			}
		}
	}
}
return(mas); // возврат массива в вызвавшую функцию
}

