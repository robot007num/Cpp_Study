#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw(){cout<<"Shape draw()"<<endl;}

    virtual ~Shape(){cout<<" delete Shape"<<endl;}
};

class Circle : public Shape
{
public:
    void draw(){cout<<"Circle draw()"<<endl;}

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

    Shape * shape[] ={ new Circle , new Square , new Triangle};

    shape[0]->draw();
    shape[1]->draw();
    shape[2]->draw();

    Shape * shape2 = new Triangle[5];
    
    for(int i=0;i<sizeof(shape)/sizeof(shape[0]);++i)
    {
        delete shape[i];
    }
    
    delete []shape2;

    getchar();
}