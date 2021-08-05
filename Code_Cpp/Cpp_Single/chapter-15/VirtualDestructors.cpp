//Behavior of virtual vs.  non-virtual destructor
#include <iostream>

using namespace std;

class Base1
{
private:
    char *data_;

public:
    Base1() { data_ = new char; }
    ~Base1()
    {
        if (data_ != NULL)
        {
            delete data_;
            cout << "Base1 data_ delete" << endl;
        }

        cout << "~Base1()" << endl;
    }
};

class Derived1 : public Base1
{
private:
    char *data_;

public:
    Derived1()
    {
        data_ = new char;
    }
    ~Derived1()
    {
        if (data_ != NULL)
        {
            delete data_;
            cout << "Derived1 data_ delete" << endl;
        }

        cout << "~Derived1()" << endl;
    }
};

class Base2
{
private:
    char *data_;

public:
    virtual ~Base2()
    {
        if (data_ != NULL)
        {
            delete data_;
            cout << "Base2 data_ delete" << endl;
        }
        cout << "~Base2()" << endl;
    }
};

class Derived2 : public Base2
{
private:
    char *data_;

public:
    ~Derived2()
    {
        if (data_ != NULL)
        {
            delete data_;
            cout << "Derived2 data_ delete" << endl;
        }

        cout << " ~ Derived2()" << endl;
    }
};

int main()
{
    Base1 *bp = new Derived1;
    delete bp;
    Base2 *bp2 = new Derived2;
    delete bp2;

    getchar();
}