#include<iostream>
using namespace std;

int
main ()
{
  int a = 10;
  int &b = a;
  //  cout<<"Address of a="<<&a<<'\n'<<"The address of its reference="<<&ref<<'\n';

  cout << "a" << a << '\t' << "b=" << b << '\n';
  b= 14;
  cout << "a=" << a << '\t' << "b=" << b << '\n';
  return 0;
}