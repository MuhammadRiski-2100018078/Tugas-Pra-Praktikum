//Tugas Pra Praktikum Alpro 
// 2100018071 Hafiz Aldin
// 2100018074 Mohammad Dody Dwi Alfayed
// 2100018078 Muhammad Riski
// 2100018087 Fikri Noor Said
#include <iostream>
#include "kalkulator.h"

using namespace std;

float x,y;
int menu, hjumlah, hbagi, hkurang, hkali;

void awal();
void awal(){
	
	cout << "Bilangan Pertama : ";
	cin >> x;
	cout << "Bilangan Kedua : ";
	cin >> y;
	
}
void penjumlahan();
void penjumlahan(){
	
awal();
cout <<"hasil " << x << " + " << y << " = " << tambah(x,y) << endl;
	
}
void pengurangan();
void pengurangan(){
	
awal();
cout <<"hasil " << x << " - " << y << " = " << kurang(x,y) << endl;
	
}
void perkalian();
void perkalian(){
	
awal();
cout <<"hasil " << x << " x " << y << " = " << kali(x,y) << endl;
	
}
void pembagian();
void pembagian(){
	
awal();
cout <<"hasil " << x << " / " << y << " = " << bagi(x,y) << endl;
}
main(){
      cout<<"\tPROGRAM KALKULATOR"<<endl;
      cout<<"\tMenu Operasi :"<<endl;
      cout<<"1. Penambahan"<<endl;
      cout<<"2. Pengurangan"<<endl;
      cout<<"3. Perkalian"<<endl;
      cout<<"4. Pembagian"<<endl;
      cout<<"Pilih Menu No : ";
      cin >> menu;
switch (menu){
	
case 1: penjumlahan(); break;
case 2: pengurangan(); break;
case 3: perkalian(); break;
case 4: pembagian(); break;
default : cout << "Menu yang anda pilih tidak ada" << endl; break;
	
}
    return 0;
}
