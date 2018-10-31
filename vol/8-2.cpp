
//Volshikov NI-202
/* 29. Дана целочисленная матрица . Определить, имеются ли среди её элементов,
 *  лежащих ниже главной диагонали, отрицательные числа. Вывести элементы главной диагонали и последнее из этих отрицательных чисел.*/
#include <iostream>
#define LEN 100

using namespace std;

class Q//Объявление класса Q
{
int n,m;//текущий размер массива слов
int mas[100][100];//массив слов
public://Объявление член-функций (методов)
void Enter();//Объявление член-функции ввода данных
void Output();//Объявление член-функции вывода данных
int Funk();/*объявление член-функции нахождения слова максимальной длины и длины этого слова*/
};//конец объявления класс Q

int main()
{
cout<<"Nahozhdenie pervogo otricatel'nogo elementa , nije glavnoi diagonali"<<endl;
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
	int s=0;
	cout<<endl<<"glavnaya diagonal':";
	for(int i=0;i<n;i++)cout<<mas[i][i]<<" ";
	for(int i=n-1;i>=0;i--){
		for(int j=m-i;j>=0;j--){
			if(mas[i][j]<0)if(s==0)s=mas[i][j];}
	}
	cout<<endl<<"Perviy otricatel'niy element : "<<s;
}

