#include <iostream>
using namespace std;

int main() {
    // deklarasikan variabel
    string nama;
    double nik, gender, status, kendaraan, gj_pokok, uang_makan, tunjangan, transport, gj_kotor, 
    pajak, gj_bersih;
    
    //tentukan data yang akan diinput kan
    cout<<"Nama Karyawan : "; cin>>nama;
    cout<<endl;
    cout<<"NIK : ";  cin>>nik;
    cout<<endl;
    cout<<"0 = perempuan / 1 = laki-laki";
    cout<<endl;
    cout<<"Gender : "; cin>>gender;
    cout<<endl;
    if(gender == 0){
        cout<<"perempuan"<<endl;
    } else if(gender == 1){
        cout<<"Laki-laki"<<endl;
    } else{
        cout<<"Gender yang Anda input kan tidak valid"<<endl;
    }
    cout<<"0 = single / 1 = menikah";
    cout<<endl;
    cout<<"Status Pernikahan : "; cin>>status;
    cout<<endl;
    if(status == 0){
        cout<<"single"<<endl;
    } else if(status == 1){
        cout<<"Menikah"<<endl;
    } else{
        cout<<"Status tidak valid"<<endl;
    }
    cout<<"0 = motor / 1 = mobil";
    cout<<endl;
    cout<<" Kendaraan : "; cin>>kendaraan;
    cout<<endl;
    if(kendaraan == 0){
        cout<<"Motor"<<endl;
    } else if(status == 1){
        cout<<"Mobik"<<endl;
    } else{
        cout<<"Kendaraan tidak valid"<<endl;
    }
    cout<<"Gaji Pokok : "; cin>>gj_pokok;
    cout<<endl;
    cout<<"Uang Makan : "; cin>>uang_makan;
    cout<<endl;
    
// tentukan tunjangan
    
if (gender == 1 && status == 1){
		tunjangan = 500;
		cout << "  Tunjangan = "<<tunjangan << endl;
	}
	else {
		tunjangan = 0;
		cout << " Tunjangan = " << tunjangan << endl;
	}
	
	//output transport
	if (kendaraan == 1){
		transport = 1000;
		cout << " Transport = " << transport << endl;
	}
	else if (kendaraan == 0) {
		transport = 500;
		cout << " Transport = " << transport << endl;
	}
	else {
		transport = 0;
		cout << " Transport = 0" << transport << endl;
	}

	gj_kotor = gj_pokok + tunjangan + uang_makan + transport;
		cout << " Gaji Kotor = " << gj_pokok << " + " << tunjangan << " + " << uang_makan << " + " << transport << " = " << gj_kotor << endl;
	
	pajak = 0.05 * gj_kotor;
		cout << "  Pajak = " << 0.05 << " * " << gj_kotor << " = " << pajak << endl;
	
	gj_bersih = gj_kotor - pajak;
		cout << " Gaji Bersih = " << gj_kotor << " - " << pajak << " = " << gj_bersih << endl;

    return 0;
}
