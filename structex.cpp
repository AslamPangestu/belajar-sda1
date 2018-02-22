#include<iostream>
using namespace std;

int main(){

    struct rapot{//deklarasi struct bernama rapot
        //member struct rapot
        int id;
        string nama;
        float nilai;
    }satu;//cara penggunaan tipe data struci ver 1
    rapot dua;//cara penggunaan tipe data struci ver 2

    //pengisisan member
    satu.id = 1;
    satu.nama = "Ryan";
    satu.nilai = 85.6;

    dua.id = 2;
    dua.nama = "Nina";
    dua.nilai = 75.8;

    cout<<satu.nama<<" Mendapat nilai "<<satu.nilai<<endl;
    cout<<dua.nama<<" Mendapat nilai "<<dua.nilai<<endl;
}