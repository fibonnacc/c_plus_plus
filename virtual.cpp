#include <iostream>

using namespace std;

struct A
{
  string a;
  A() {
    a = "Hicham";
    cout << "A constructor is called the name is : " << &a << endl;
  }
};

struct B : virtual public A
{
  B() {
    cout << "B constructor is called the name is : " << &a << endl;
    a = "name_B";
  }
};


struct C : virtual  public A
{
  C() {
    cout << "C constructor is called the name is : " << &a << endl;
    a = "name_C";
  }
};

struct D : public B, public C
{
  D() {
    cout << "D constructor is called the name is : " << &a << endl;
    a = "name_D";
  }

  D(string name) {
    a = name;
  }
};


int  main (int argc, char *argv[])
{
  D obj1;
  return 0;
}
