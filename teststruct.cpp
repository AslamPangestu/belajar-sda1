#include<iostream>
using namespace std;

int main(){
    struct data{
        string nama;
        float nilai;
    };
    data mhs[2];

    mhs[0] = {"aslam",8.5};
    mhs[1] = {"nila",9.5};

    cout<<mhs[0].nama<<mhs[0].nilai;
    cout<<mhs[1].nama<<mhs[1].nilai;
}