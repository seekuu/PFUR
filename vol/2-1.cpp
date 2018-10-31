//Volshikov NI-202
/*2. Подсчитать, сколько раз встречается в заданной целочисленной матрице  максимальное по величине число.*/
#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n=-1,m=-1,max=-1,cnt=0;
cout<<"Naiti kol-vo max po velechine chisel"<<endl;
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
//сначала находим макс элемент , а потом проверям сколько раз он встречается
for(int i = 0;i<n;i++){
	for(int j =0;j<n;j++){
		if(arr[i][j]>max)max=arr[i][j];
	}
}
for(int i = 0;i<n;i++){
	for(int j =0;j<n;j++){
		if(arr[i][j]==max)cnt++;
	}
}
cout<<"kol-vo max po velechine chisel : "<<cnt;}
