//Constructor/destructor order
//Qt可以编译过，有些编译器编译不过。
#include <fstream>

using namespace std;

ofstream out("order.out");

#define CLASS(ID) class ID{ \
public: \
    ID()    {   out<<"default\n";} \
    ID(int) {   out<<#ID" constructor\n";} \
    ~ID()   {   out<<#ID" destructor\n";}  \
};

CLASS(Base1);
CLASS(Member1);
CLASS(Member2);
CLASS(Member3);
CLASS(Member4);

class Derivedl:public Base1
{
private:
    /* data */
    Member1 m1;
    Member2 m2;
public:
    Derivedl(int):m2(1),m1(2),Base1(3){
        out<<" Derivedl constructor\n";
    }
    ~Derivedl(){ 
        out<<" Derivedl destructor\n";
    }
};

class Derived2 : public Derivedl
{
private:
    Member3 m3;
    Member4 m4;
public:
    Derived2(/* args */):m3(1),Derivedl(2),m4(3){
        out<<" Derived2 constructor\n";
    }
    ~Derived2()
    {
        out<<" Derived2 destructor\n";
    }
};

int main()
{
    Derived2 d2;
}


