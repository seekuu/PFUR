//Nesin NI-202
#include <iostream>
//#include <conio.h>
#include <cmath>
/*36. Дана матрица размера . Найти количество ее строк,
 * элементы которых упорядочены по возрастанию (по условию такие элементы есть в матрице).
 *  Вывести последнюю из этих строк и полученное количество.  */
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
	cout<<"Kol-vo uporyadochennih strok"<<endl;
	int p=1,cnt=0,s=0,r=0;
	for(int i=n-1;i>=0;i--){
		r=0;
		for(int j=m-1;j>0;j--){
			if(mas[i][j]<mas[i][j-1])r=1;
		}
		cnt+=r;
		if(r==0 and s==0){
			cout<<"Poslednyaa stroka : ";
			for(int l=0;l<m;l++)cout<<mas[i][l]<<" ";s=1;
		}
	}
	cout<<endl<<"K0l-vo strok : "<<n-cnt;
}
