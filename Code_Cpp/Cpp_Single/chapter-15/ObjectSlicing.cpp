#include <iostream>
#include <string>

using namespace std;

class Pet
{
private:
    string pname;

public:
    Pet(const string &name) : pname(name) {}
    virtual string name() const {return pname;}
    virtual string description() const {return "This is" +pname;}
};

class Dog:public Pet{
    private:
    string favoriteActivity;
    public:
    Dog(const string &name,const string & activity):Pet(name),favoriteActivity(activity){

    }

    string description() const{
        return Pet::name() + "likes to"+favoriteActivity; 
        }
};

void describe(Pet p){  //Slices the object
    cout<<p.description()<<endl;
}

int main()
{
    Pet p("Alfred");
    Dog d("Fluffy","sleep");
    describe(p);
    describe(d);

    getchar();
}