#include "FileClass.h"

#include <fstream>
#include <cassert>

FileClass::FileClass()
{
    data_.clear();
}

FileClass::FileClass(std::string data)
{
    std::ifstream in(data.c_str());
    assert(in.is_open());

    while(std::getline(in,data_));
}

std::string FileClass::contents()
{
    return data_;
}

extern void FileTest()
{
    
    FileClass in("D:\\Codefield\\Code_Cpp\\Cpp_Multiple\\Test\\test.txt");
    in.contents();
}