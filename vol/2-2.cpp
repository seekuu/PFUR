//Volshikov NI-202
/*27. Дана матрица . Если хотя бы один элемент строки матрицы отрицателен, то все элементы этой строки заменить нулями.*/
#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n=-1,m=-1,k=0,cnt=0;
cout<<"Zamenit' stroku na nuli , esli est' otricatel'niy element"<<endl;
while(n<0){
	cout<<"Vvedite kol-vo strok >=0:"<<endl;
	cin>>n;}
while(m<0){
	cout<<"Vvedite kol-vo stolbcov >=0:"<<endl;
	cin>>m;}
int **arr = new int *[n];
   //Динамический массив)
   cout<<"Zapolnenie massiva"<<endl;
   //Вывод подсказки для пользователя на экран

   for (int i = 0; i<n; i++)
   //Заполняем массив с клавиатуры)
   {
           arr[i] = new int[m];
           for (int j = 0; j<m; j++)
           {
        	   cout<<"Vvedite element: ";
               cin>>arr[i][j];
           }}
for(int i = 0;i<n;i++){
	k=0;
	for(int j=0;j<m;j++){
		if(arr[i][j]<0)k=1;
	}
	//проверяем элементы строки на отрицательность
	if(k==1){
		for(int j=0;j<m;j++){
				arr[i][j]=0;
			}
	}
	//если отрицательный элемент есть , то меняем всю строку ну нули
}

for(int i = 0;i<n;i++){
	cout<<endl;
	for(int j=0;j<m;j++){
		cout<<arr[i][j]<<" ";
	}
}}
