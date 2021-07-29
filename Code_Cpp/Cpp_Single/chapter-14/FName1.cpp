//An fstream with a file name

#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FName2
{
    ifstream file;
    string filename;
    bool named;

public:
    FName2():named(false){}
    FName2(const string & fname):filename(fname),file(fname.c_str())
    {
        assure(file,filename);
        named = true;
    }

    string name() const {return filename;}
    void name(const string &newName){
         if(named) return; //Don't overwrite
         filename = newName;
         named =true;
    }

    operator ifstream&() { return file;}
};

int main()
{
    FName2 file("FName1.cpp");
    cout<< file.name()<<endl;
    //Error:close() not a member;
    //! file.close();
}