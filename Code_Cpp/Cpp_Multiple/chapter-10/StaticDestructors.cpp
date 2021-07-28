#include <fstream>

using namespace std;

ofstream out("statdest std"); //Trace file

class Obj
{
    char c;
    public:
    Obj(char cc):c(cc){
        out<<" Obj::Obj() for"<<c<<endl;
    }

    ~Obj()
    {
        out<<" Obj::~Obj() for"<<c<<endl;
    }
};

Obj a('a');   //Global (static storage)
//Constructor & destructor always  called

void f()
{
    static Obj b('b');
}

void g()
{
    static Obj c('c');
}

int main()
{
    out<<" inside main()"<<endl;
    g();  //Calls static constructor for b
    f(); //not called
    out<<" leaving main()"<<endl;
}