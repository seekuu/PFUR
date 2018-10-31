//Volshikov NI-202
/*В массиве из n чисел найти первый отрицательный элемент и его индекс*/
#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n=-1;
while(n<0){
	cout<<"vvedite n";
	cin>>n;
}
cout<<"Nahozhdenie pervogo otricatel'nogo el-ta"<<endl;
int *arr = new int[n];
	   cout<<"Zapolnite massiv"<<endl;
	   for (int i = 0; i<n; i++)
	   {
	        cout<<"Vvedite element: "<<endl;;
	        cin>>arr[i];
	        if(arr[i]<0){cout<<"Element : "<<arr[i]<<" "<<"Index : "<<i;break;}
	   }

}

