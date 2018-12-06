#include <iostream>
#define LEN 20
#include <cmath>
using namespace std;

/* 22. Дан массив ненулевых целых чисел размера N. Проверить, чередуются ли в нем положительные и отрицательные числа. Если чередуются, то вывести 0, если нет, то вывести порядковый номер первого элемента K, нарушающего закономерность. Вывести ноль или сумму чисел от K до N соответственно.  */

class Q
{
private:
  int mas[LEN];	//массив целых чисел
  int kol;	//текущий размер массива
public:
  Q(); /* объявление конструктора*/
  Q(int, int []);
  void output(); //объявление член-функции вывода
  int funk();/*объявление член-функции */
  int Check(int);
};	//конец объявления класс Q

int main()
{
	setlocale(LC_ALL, "Rus");
	int n; int k;
	int mas[LEN];
	int min;
	int ind;

	cout<<" Проверить последовательность на чередование положительного и отрицательного элемента"<<endl;
	cout << "Введите количество элементов массива: ";

	do{
		cin >> n;
		if(n <= 0 || n > 20)
			cout << "Ошибка! Введите корректное значение!\n";
	} while(n <= 0 || n > 20);
	cout << "Ввод массива чисел:\n";
	for(int i = 0; i < n; i++){
		cout << "Введите элемент [" << i + 1 << "] = ";
		cin >> mas[i];
	}

	Q obj1(n, mas);
	obj1.output();
	min = obj1.funk();


	return 0;
}

Q::Q() /* конструктор */
{
	kol = 0;
	cout << "\n\nВведите количество элементов массива: ";
	do{
		cin >> kol;
		if(kol <= 0 || kol > 20)
			cout << "Ошибка! Введите корректное значение!\n";
	} while(kol <= 0 || kol > 20);

	for(int i = 0; i < kol; i++)
	{
		cout << "Введите элемент ["<< (i+1) <<"] = ";
		cin >> mas[i];
	}
}

Q::Q(int n, int f[]){
	kol = n;
	for(int i = 0; i < kol; i++)
		mas[i] = f[i];
}

void Q::output() //функция вывода данных
{
	cout <<"Массив:\n";
	for(int i = 0; i < kol; i++)
		cout << mas[i]<< " ";
	cout << endl;
}
int Q::Check(int r){
//proveryaem kol-vo znakov chisla
	int cnt=0;
	while(r!=0){
			r/=10;
			cnt++;
		}
	return cnt-1;
}
int Q::funk()
{
	int s=0,cnt=0,b,k;
	cout<<"Введите k"<<endl;
	cin>>k;
		for(int i=0;i<kol;i++){
			if(mas[i]==0)continue;
			b=pow(10,Check(mas[i]));
			if(b==0)continue;
			b=mas[i]%b;
			b=b%k;
			if(b==0){
				s+=mas[i];
				cnt++;
			}
		}
		cout<<"Summa:"<<s<<endl;
		cout<<"Kolichestvo :"<<cnt<<endl;
		return 0;

}
