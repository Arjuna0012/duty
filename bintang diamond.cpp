#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "NAMA	:Ahmad Arjuna I S\n";
  cout << "NIM	:07.1.2021.0028\n";
  cout << "PRODI	:TEKNIK INFORMATIKA\n\n";
  cout << "   Tugas Alpro C++\n ";
  cout << "# BINTANG DIAMOND #" << endl;
  cout << " ================= " << endl;
  cout << endl;
 
  int lebar_belah_ketupat,i,j,k;
 
  cout << "Input lebar belah ketupat: ";
  cin >> lebar_belah_ketupat;
 
  cout << endl;
 
  for(i=1;i<=lebar_belah_ketupat;i++) {
 
    for(j=1;j<=lebar_belah_ketupat-i;j++) {
      cout << " ";
    }
 
    for(k=1;k<=i;k++) {
      cout << " *";
    }
    cout << endl;
  }
 
  for(i=1;i<lebar_belah_ketupat;i++) {
 
    for(j=1;j<=i;j++) {
      cout << " ";
    }
 
    for(k=1;k<=lebar_belah_ketupat-i;k++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}
