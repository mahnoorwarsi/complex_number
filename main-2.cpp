#include<iostream>
#include"comp_num.h"
using namespace std;
int main()
{
  complexnumber z1(2,5);
  complexnumber z2(z1);
complexnumber z3(99,99);
complexnumber z4;
complexnumber z5;
complexnumber z6;
complexnumber z7(99,99);
complexnumber z8;
complexnumber con;
complexnumber mod;
z3=z1.add(z2);
z4=z1.sub(z2);
con=z7.conjugate(z4);
mod=z8.modulus(z4);
z5=z1+z2;
z6=z1-z2;
z7=z1*z2;
z8=z1/z2;
cout<< "output by display function"<<endl;
z1.display();
z2.display();
z3.display();
z4.display();
z5.display();
z6.display();
z7.display();
z8.display();
con.display();
mod.display();
cout<<"output by operator overloading"<<endl;
cout<<"z1="<<z1;
cout<<"z2="<<z2;
cout<<"z3="<<z3;
cout<<"z4="<<z4;
cout<<"z5="<<z5;
cout<<"z6="<<z6;
cout<<"z7="<<z7;
cout<<"z8="<<z8;
cout<<"conjugate  is "<<con;
cout<<"modulus of complex is "<<mod;
getchar();
}
