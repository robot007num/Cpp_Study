//Subtyping solves the problem

#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FName2:public ifstream
{
    string filename;
    bool named;

public:
    FName2():named(false){}
    FName2(const string & fname):filename(fname),ifstream(fname.c_str())
    {
        assure(*this,filename);
        named = true;
    }

    string name() const {return filename;}
    void name(const string &newName){
         if(named) return; //Don't overwrite
         filename = newName;
         named =true;
    }

};

int main()
{
    FName2 file("FName2.cpp");
    assure(file,"FName2.cpp");
    cout<<"name:"<<file.name()<<endl;
    string s;
    getline(file,s); // These work too!
    file.seekg(-200,ios::end);
    file.close();
}