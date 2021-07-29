// Using static const to create a
//compile-time constant inside a class

//#include <string>
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

class StringStack
{
private:
    /* data */
    static const int size = 100;
    const string * stack[size];
    int index;
public:
    StringStack(/* args */);
    void push(const string *s);
    const string * pop();
    ~StringStack();
};

StringStack::StringStack():index(0)
{
    memset(stack,0,size * sizeof(string *));
}

StringStack::~StringStack()
{
    
}

void StringStack::push(const string *s)
{
    if( index < size )
        stack[index ++] =s;
}

const string * StringStack::pop()
{
        if(index >0)
        {
            const string *rv =stack[--index];
            stack[index] =0;
            return rv;
        }

        return  0;
}

string iceCream[]= {
    "pralines & cream",
    "fudge ripple",
    "jamocha almond fudge",
    "wild mountain blackberry",
    "raspberry sorbet",
    "lemon swirl",
    "rocky road",
    "deep chocolate fudge"
};

const int iCsz = sizeof iceCream / sizeof * iceCream;

int main()
{
    StringStack ss;
    
   for(int  i=0; i< iCsz;++i)
        ss.push(&iceCream[i]);
    
}