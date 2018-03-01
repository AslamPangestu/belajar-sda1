#include<iostream>
using namespace std;

int main(){
    //Jelaskan kodingan dri line 6 - 13 Yajiz
    int x;
    int *px;
    int y;

    x = 10;

    px = &x; //pointer px akan menyimpan alamat dari x(&x)
    y = *px; //var y menyimpan nilai yang 

    cout << "tampilkan nilai x = "<< x << endl;//nilai x    
    cout << "tampilkan alamat x = "<< &x << endl;//alamat x
    cout << "tampilkan nilai px = " << px << endl;//alamat yang ditunjuk px
    cout << "tampilkan alamat px = " << &px << endl;//tampilkan alamat px
    cout << "tampilkan nilai yang ditunjuk px = " << *px << endl;//tampilkan nilai yang ditunjuk px
    cout << "tampilkan nilai y = " << y << endl;//nilai y
    cout << "tampilkan alamat y = "<< &y << endl;//alamat y
}