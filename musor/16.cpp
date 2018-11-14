//Kuzmin NI-202
/*Вариант 5*/
#include <iostream>
using namespace std;

int mas(int arr[],int A[],int i,int n){
	int s=1;
	for(int k=0;k<n;k++){
		if(k==i)continue;
		s*=arr[k];
	}
	A[i]=s;
	cout<<arr[i]<<endl;
}
int main() {
	cout<<"Создать массив A в котором i-ый элемент A равен произведению остальных элементов массива arr"<<endl;
	int n=-1;
	while(n<0){
		cout<<"Vvedite razmernost' massiva >=0:"<<endl;
		cin>>n;}
	int *arr = new int[n];
	   //Динамический массив
	   cout<<"Zapolnite massiv"<<endl;
	   for (int i = 0; i<n; i++)
	   //Заполняем массив с клавиатуры)
	   {
	        cout<<"Vvedite element: "<<endl;;
	        cin>>arr[i];
	   }
	int A[n];
	for(int i=0;i<n;i++){
		mas(arr,A,i,n);
	}
	for(int i=0;i<n;i++)cout<<A[i]<<" ";
}

