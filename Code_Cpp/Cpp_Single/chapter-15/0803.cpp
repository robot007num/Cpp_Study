//Behavior of virtual vs.  non-virtual destructor
#include <iostream>

using namespace std;

class Base1{
public:
    
    ~Base1() {cout<<"~Base1()"<<endl;}

    virtual void test(){ cout<<" this is Base1"<<endl;}
};

class Base2:public Base1
{
    public:
    void test(){ cout<<"this is Base2"<<endl;}
};

class Base3:public Base2
{
    public:
    void test(){ cout<<"this is Base3"<<endl;}
};


int main()
{
    Base1 aa;
    aa.test();
    Base1 *bp = new Base3;
    bp->test();
    delete bp;
    getchar();
}
