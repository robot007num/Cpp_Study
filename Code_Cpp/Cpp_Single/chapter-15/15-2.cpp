#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() =0;

    Shape()
    {
        draw();
    }

    virtual ~Shape(){cout<<" delete Shape"<<endl;}
};

class Circle : public Shape
{
public:
    void draw(){cout<<"Circle draw()"<<endl;}

    void test(){ cout <<" this is Circle"<<endl;}

    ~Circle(){cout<<" delete Circle"<<endl;}
};

class Square : public Shape
{
public:
    void draw(){cout<<"Square draw()"<<endl;}

    ~Square(){cout<<" delete Square"<<endl;}
};

class Triangle : public Shape
{
public:
    void draw(){cout<<"Triangle draw()"<<endl;}

    ~Triangle(){cout<<" delete Triangle"<<endl;}
};

int main()
{
    getchar();
}