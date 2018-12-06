#include <iostream>
#define LEN 20
#include <cmath>
using namespace std;

/* Дано число R и массив размера N. Найти два различных элемента массива, сумма
которых наиболее близка к числу R, и вывести эти элементы в порядке возрастания
их индексов (то есть такой элемент AK, для которого величина |AK – R| является
минимальной)*/

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

	cout<<"Nahozhdenie dvuh blizhaishih k R el-tov"<<endl;
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

int Q::funk()
{
		int R,m1,m2;
		cout<<"Vvedite R";
		cin>>R;
		m1=mas[0];
		m2=mas[1];
		for(int i=2;i<kol;i++){
			if(abs(mas[i]-R)<abs(m1-R) || abs(mas[i]-R)<abs(m2-R)){
				if (abs(m1-R)<abs(m2-R))m2=mas[i];
				else m1=mas[i];
			}
		}
		//prohodim po massivu i nahodim dva blizhaishih el-ta
		cout<<"Элементы:"<<m1<<" "<<m2;
		return 0;
}


