//Volshikov NI-202
/*Дан целочисленный массив размера N. Проверить, чередуются ли в нем четные и
нечетные числа (в именно таком порядке). Если чередуются, то вывести 0, если нет, то вывести порядковый
номер первого элемента, нарушающего закономерность.*/
#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n=-1,k=0;
while(n<0){
	cout<<"vvedite n";
	cin>>n;
}
cout<<"proverka na chereduemost'"<<endl;
int *arr = new int[n];
	   cout<<"Zapolnite massiv"<<endl;
	   for (int i = 0; i<n; i++)
	   {
	        cout<<"Vvedite element: "<<endl;;
	        cin>>arr[i];
	   }

for(int i = 0;i<n;i++){
	if(arr[i]%2==1 or arr[i+1]%2==0){cout<<" Element : "<<i;k=1;break;}
}
if(k==0)cout<<0;
}
