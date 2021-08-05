#include <iostream>

using namespace std;

#if 0 //这是测试 对基类对象操作的代码也能透明地操作派生类对象
class Pet
{
private:
    string name_;

public:
    virtual void print() const
    {
        cout << " this is pet" << endl;
    }

    Pet(const string &name):name_(name){}
};

class Dog : public Pet
{
public:
    void print() const
    {
        cout << " this is Dog" << endl;
    }

    Dog(const string &name):Pet(name){}
};

void test(Pet &t)
{
    t.print();
}

#endif

class Base
{
public:
virtual void f(){ cout<<"this is Base"<<endl;}
};

class Base1:public Base
{
    public:
    void f() { cout <<" this is Base1"<<endl;}
};


int main()
{
    // Pet pet("Pet");
    // test(pet);
    // Dog dog("Dog");
    // test(dog);

    Base *bs = new Base1;
    bs->f();

    getchar();
}