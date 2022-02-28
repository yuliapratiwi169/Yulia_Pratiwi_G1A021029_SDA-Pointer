#include <iostream>

using namespace std;

main(){
    long *P1;
    long a;
    long *P2;
    long b;
    long *P3;
    long c;

    a=10;
    b=15;
    c=27;
    P1=&a;
    P2=&b;
    *P1=c; 
    a=*P2;
    b=6;
    P3=&b;
    P3=&c;
    *P1=*P3;
    cout<<"Nilai a  : "<<a<<endl;
    cout<<"Nilai b : "<<b<<endl;
    cout<<"Nilai c : "<<c<<endl;
    cout<<"Nilai &a  : "<<&a<<endl;
    cout<<"Nilai &b : "<<&b<<endl;
    cout<<"Nilai &c : "<<&c<<endl;
    cout<<"Nilai P1 : "<<P1<<endl;
    cout<<"Nilai P2 : "<<P2<<endl;
    cout<<"Nilai P3 : "<<P3<<endl;
    cout<<"Nilai *P1 : "<<*P1<<endl;
    cout<<"Nilai *P2 : "<<*P2<<endl;
    cout<<"Nilai *P3 : "<<*P3<<endl;

    return 0;
}