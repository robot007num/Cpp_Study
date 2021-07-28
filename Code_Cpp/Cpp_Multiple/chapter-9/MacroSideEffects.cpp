#include <iostream>

using namespace std;


class Member
{
private:
    int i,j,k;
public:
    Member(int x =0):i(x),j(x),k(x){ }
    ~Member(){cout <<" ~Member"<<endl;}
};


class WithMembers
{
private:
    Member q,r,s;  //Have constructors
    int i;
public:
    WithMembers(/* args */);
    ~WithMembers();
};

WithMembers::WithMembers(/* args */)
{
}

WithMembers::~WithMembers()
{
}


