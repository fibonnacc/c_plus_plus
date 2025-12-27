#include <iostream>

using namespace std;

struct A
{
  string a;
  A() {
    a = "Hicham";
    cout << "A constructor 1 is called the name is : " << &a << endl;
  }
  A(string target) {
    a = target;
    cout << "A constructor 2 is called the name is : " << endl;
  }
};

struct B : virtual public A
{
  B() {
    cout << "B constructor is called the name is : " << &a << endl;
    a = "name_B";
  }
  B(string target) : A(target) {
    cout << "B constructor 2 is called the name is : "  << endl;
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
  B thing("hhhh");

  cout << thing.a << endl;
  return 0;
}
