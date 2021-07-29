#include <iostream>
using namespace std;
class X
{
private:
    int i;
    float f;
    char c;
    char *s;
public:
    X(int a){cout<<" have arg"<<endl;}
    X(){cout<<" nothing "<<endl;}
    ~X(){}
};

class Y:X
{
private:
    /* data */
   // X x;
public:
    Y(/* args */){cout<<" I'm Y"<<endl;}
    ~Y(){}
};




int main()
{

    Y y;
    int i(100);  //Applied to ordinary definition

    cout<<" i:"<<i<<endl;
    int *ip = new int(47); 
    
    getchar();
}