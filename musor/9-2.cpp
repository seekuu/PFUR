//Kuzmin ,NI-202
#include <iostream>
#define LEN 20

using namespace std;

/* . Дан массив размера N. Найти количество его промежутков монотонности (то есть
участков, на которых его элементы возрастают или убывают).*/

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
};	//конец объявления класс Q

int main()
{
	setlocale(LC_ALL, "Rus");
	int n; int k;
	int mas[LEN];
	int min;
	int ind;

	cout << "Найти количество его промежутков монотонности.\n";
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

Q::Q() /* конструктор */
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

int Q::funk()
{
	int cnt=0,j,s=0;
		for(int i=0;i<kol-1;i++)
		{	j=i;
			while(mas[i]>mas[i+1]){s+=mas[i];i++;}
			if(j!=i)cnt++;
		}
		for(int i=0;i<kol-1;i++)
			{	j=i;
				while(mas[i]<mas[i+1]){s+=mas[i];i++;}
				if(j!=i)cnt++;
			}
		if(mas[kol-1]!=mas[kol-2])s+=mas[kol-1];
		if(s!=0)cout<<"Количество участков: "<<cnt<<endl;
		else cout<<(0,0);
}
