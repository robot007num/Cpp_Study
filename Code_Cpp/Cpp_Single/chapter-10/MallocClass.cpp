//Malloc with class objects
//what you'd have to do if not for "new"

#include "../require.h"
#include <cstdlib>  //malloc() & free()
#include <cstring>  //memset()
#include <iostream>

using namespace std;

class Obj{
    int i,j,k;
    enum {sz =100};
    char buf[sz];
    public:
    void initialize(){  //Can't use constructor
        cout<<" initializing Obj"<<endl;
        i =j =k =0;
        memset(buf,0,sz);
    }

    void destory() const{
        cout<<" destroying Obk"<<endl;
    }

};

int main() {
     Obj * obj = (Obj *)malloc(sizeof(Obj));
     require( obj != 0);
     obj->initialize();
     // ... sometime later
     obj->destory();
     free(obj);
}