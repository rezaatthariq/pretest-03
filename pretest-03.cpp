/*
Author		: M. Reza Atthariq Kori
NPM			: 140810180060
Kelas		: B
Tanggal		: 13 Maret 2019
*/

#include<iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout<<"Masukkan banyak data : ";cin>>n;
}

void inputMhs(larikMhs& mhs, int n){
	for(int i=0;i<n;i++){
		cout<<"Data Mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukkan NPM : ";cin>>mhs[i].npm;
		cout<<"Masukkan nama : ";cin>>mhs[i].nama;
		cout<<"Masukkan IPK : ";cin>>mhs[i].ipk;
	}
}

void cetakMhs(larikMhs& mhs, int n){
	for(int i=0;i<n;i++){
		cout<<"\nData Mahasiswa ke-"<<i+1<<endl;
		cout<<"NPM	: "<<mhs[i].npm<<endl;
		cout<<"Nama	: "<<mhs[i].nama<<endl;
		cout<<"IPK	: "<<mhs[i].ipk<<endl;
	}
}

void sortNama(larikMhs& mhs, int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (mhs[i].nama > mhs[i].nama[j+1]) 
              swap(&mhs[i].nama, &mhs[i].nama[j+1]); 
} 

void swap(int x, int y){
	int temp;
	x=temp;
	x=y;
	temp=y;
}

int main(){
	larikMhs mhs;
	int n;
	
	banyakData(n);
	inputMhs(mhs,n);
	cetakMhs(mhs,n);
	sortNama(mhs,n);
	cetakMhs(mhs,n);
}
