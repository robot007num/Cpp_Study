//Deleting vod pointers can cause memory leaks

#include <iostream>

using namespace std;

class Object
{
private:
    /* data */
    void *data;
    const int size_;
    const char id_;
public:
    Object(int size,char c):size_(size),id_(c)
    {
        data = new char[size_];
        cout<< "Constructing object "<< id_<<" , size ="<<size_ <<endl;
    }
    ~Object()
    {
        cout <<" Destructing object"<< id_ <<endl;
        delete []data;  // ok, just releases storage,
                        // no destructor calls are necessary
    }
};


int main()
{
    Object * a = new Object(40,'a');
    delete a;
    void *b = new Object(40,'b');
    delete b;
}