//Kuzmin ,NI-202
#include <iostream>
#define LEN 20

using namespace std;

/* Дан массив A размера N. Вывести вначале его элементы с нечетные элементы в порядке возрастания номеров, а затем – четные элементы в порядке убывания номеров*/

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

	cout << "Вывести вначале его элементы с нечетные элементы в порядке возрастания номеров, а затем – четные элементы в порядке убывания номеров\n";
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
	for(int i=0;i<kol;i++)if(mas[i]%2==1)cout<<mas[i];
	for(int i=kol-1;i>=0;i--)if(mas[i]%2==0)cout<<mas[i];
}

