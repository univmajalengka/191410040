#include <iostream>
using namespace std;
int data[100]; 
int n;
int main ()
{
		cout<< "Masukkan Jumlah Data";
		cin>>n;
		cout<<endl;
		for(int i=0;i<=n;i++)
{
cout<<"masukkan data Ke :"<<i<<":";
cin>>data[i];
}
cout<<endl;
cout<<"Data yang dimasukkan:";
for(int i=0;i<-n;i++)
{
	cout <<" "<<data[i];
}
return 0;
}
