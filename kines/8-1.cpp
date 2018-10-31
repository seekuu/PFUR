//Nesin NI-202
#include <iostream>
//#include <conio.h>
#include <cmath>
/*11. Дана матрица размера . Для среднего столбца матрицы найти произведение четных его элементов. Вывести этот столбец и произведение.*/
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
cout<<"Vichislenie suumi el-tov raspolojennih nije glavnoi diagonali"<<endl;
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
	cout<<"proizvedenie chetnih el-tov srednego stolbca"<<endl;
	int p=1;
	for(int i=0;i<m;i++){
		if(mas[i][n/2]%2==0)p*=mas[i][n/2];
	}
	cout<<"proizvedenie : "<<p;
}
