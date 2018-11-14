//Kuzmin Sergey NI-202
#include <iostream>
#include <cstdlib>
#include <string.h>
#define LENROW 100
#define LENCOL 11
/*5. В матрице  вычислить сумму элементов,
 * расположенных выше главной диагонали.
 * Найти это число и диагональ матицы.*/
using namespace std;

class Q//Объявление класса Q
{
int n,m;//текущий размер массива слов
int mas[100][100];//массив слов
int B[100];
public://Объявление член-функций (методов)
void Enter();//Объявление член-функции ввода данных
void Output();//Объявление член-функции вывода данных
int Funk();/*объявление член-функции нахождения слова максимальной длины и длины этого слова*/
};//конец объявления класс Q

int main()
{
cout<<"11111";
int max; // результат- максимальная длина и //слово максимальной длины
Q obj;	//Объявление объекта
obj.Enter(); //Ввод данных
obj.Output(); //Вывод данных
obj.Funk();
return 0;
}
void Q::Enter()//отложенное опр-ние функции ввода данных
{
	cout<<"Vvedite n:";
	cin>>n;
	m=n;
	cout<<"Zapolnenie massiva"<<endl;
	for (int i = 0; i<n; i++)
	   {
	           for (int j = 0; j<m; j++)
	           {
	        	   cout<<"Vvedite element: ";
	               cin>>mas[i][j];
	           }}
}
void Q::Output()	/* отложенное определение член-функиия вывода данных */
{
cout<<"\n\n Vivod massiva slov:";
for(int i=0; i<n; i++){
	cout<<endl;
	for(int j=0;j<m;j++){
		cout<<mas[i][j]<<" ";
		}
	}
}
int Q::Funk(){
	cout<<endl<<"Заполнить массив B по следующему правилу: строка mas возрастает - 1 ,строка mas убывает - (-1), нет монотонности - 0"<<endl;
	for(int i=0;i<n;i++){
		int s=0,plus=0,minus=0;
		for(int j=0;j<m-1;j++)
			if(mas[i][j]<mas[i][j+1]){
				plus=1;
				if(mas[i][j]>mas[i][j+1] or mas[i][j]==mas[i][j+1])s=1;
			}
			else if(mas[i][j]>mas[i][j+1]){
				minus=1;
				if(mas[i][j]<mas[i][j+1] or mas[i][j]==mas[i][j+1])s=1;
					}
			else s=1;
		if(s==1)B[i]=0;
		else{
			if(plus==1)B[i]=1;
			else B[i]=-1;
		}
	}
	cout<<endl<<"Массив B"<<endl;
	for(int i=0;i<n;i++)
			cout<<B[i]<<" ";
}

