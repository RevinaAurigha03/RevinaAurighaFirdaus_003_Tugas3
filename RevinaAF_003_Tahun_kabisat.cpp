//** Revina Aurigha Firdaus **//
//** 21091397003 **//

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
  int tahun;
  cout << "MENENTUKAN TAHUN KABISAT"<<endl;
  cout << "Masukkan tahun: ";
  cin >> tahun;
  if (tahun%400 == 0){
    cout << tahun << " Merupakan Tahun Kabisat\n";
  } else if(tahun%100 == 0){
    cout << tahun << " Bukan Tahun Kabisat\n";
  } else if(tahun%4 == 0){
    cout << tahun << " Merupakan Tahun Kabisat\n";
  } else {
    cout << tahun << " Bukan Tahun kabisat\n";
  }
  return 0;
}
