//Hiding overloaded names during inheritance

#include <iostream>
#include <string>

using namespace std;

class Base
{
private:
    /* data */
public:
    Base(/* args */){}
    ~Base(){}

    int f() const{
        cout<<" Base::f()"<<endl;
        return 1;
    }

    int f(string) const {return 1;}

    void g() {}
};

class Derived1:public Base
{
private:
    /* data */
public:
    Derived1(/* args */){}
    ~Derived1(){}
    void g() const{}
};

class Derived2:public Base
{
private:
    /* data */
public:
    //Redefinition;
    Derived2(/* args */){}
    ~Derived2(){}

    int f() const{
        cout<<" Derived2::f()"<<endl;
        return 2;
    }

};

class Derived3:public Base
{
    public:
    //Change return type;
    void f() const{
        cout<<" Derived3::f()"<<endl;
    }
};

class Derived4:public Base
{
private:
    /* data */
public:
    //Change argument list:
    Derived4(/* args */){}
    ~Derived4(){}

    int f(int) const{
        cout<<" Derived4::f()"<<endl;
        return 4;
    }
};

int main()
{
    string s("hello");
    Derived1 d1;
    int x = d1.f();
    Derived2 d2;
    x =d2.f();
    //! d2.f(s); //string version hidden
    Derived3 d3;
    //! d3.f();  // return int version hidden
    Derived4  d4;
    //! d4.f();  //f() version hidden
    x = d4.f(1);
}




