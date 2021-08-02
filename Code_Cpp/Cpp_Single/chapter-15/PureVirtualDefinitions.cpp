// Pure virtual base definitions
#include <iostream> 

using namespace std;

class Pet
{
private:
    /* data */
public:
    virtual void speak() const =0;
    virtual void eat() const =0;
    // Inline pure virtual definitions illegal;
    // ! virtual void sleep() const =0{}
};

//Ok, not defined inline

void Pet::eat() const{
    cout << " Pet::eat()"<<endl;
}

void Pet::speak() const{
    cout<<" Pet::seekg"<<endl;
}

class  Dog:public Pet
{
private:
    /* data */
public:
    void speak() const { Pet::speak();}
    void eat() const {  Pet::eat();}

};

int main()
{
    Dog simba;
    simba.speak();
    simba.eat();

    getchar();
}

