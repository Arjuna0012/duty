#include<iostream>
using namespace std;

int main (){
	int nim [5];
	string nama [5];
	int umur [5];
	int tahun_lahir[5];
	
	cout <<"   ==# DATA MAHASISWA #=="<< endl<<endl<<endl;
	cout <<"silahkan input data anda :" <<endl<<endl;
	for (int i = 0; i<= 4; i++){
		cout << "nim [" << i + 1 << "]=";
		cin >> nim[i];
	}cout << " " <<endl;
	
		
	for (int i = 0; i<= 4; i++){
		cout << "nama [" << i + 1 << "]=";
		cin >> nama[i];
	}cout << " " <<endl;
	
		
	for (int i = 0; i<= 4; i++){
		cout << "umur [" << i + 1 << "]=";
		cin >> umur[i];
	}cout << " " <<endl;
	
			
	for (int i = 0; i<= 4; i++){
		cout << "tahun_lahir [" << i + 1 << "]=";
		cin >> tahun_lahir[i];
	}cout << " " <<endl;
	
	int l;
	cout << "\nmasukan nomor indeks = ";
	cin >> l;
	cout << "\n";
	cout << "+======================+\n\n";
	cout << "nim [" << l << "]		:" << nim[l-1] <<endl;
	cout << "nama [" << l << "]	:" << nama[l-1] <<endl;
	cout << "umur [" << l << "]	:" << umur[l-1] <<endl;
	cout << "tahun lahir [" << l << "]	:" << tahun_lahir[l-1] <<endl;
}
