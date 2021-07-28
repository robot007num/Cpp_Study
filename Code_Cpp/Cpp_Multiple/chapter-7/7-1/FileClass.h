#ifndef FILECLASS_H
#define FILECLASS_H

#include <iostream>

class FileClass
{
private:
    /* data */
    std::string data_;
public:
    FileClass();
    FileClass(std::string data);
    std::string contents();
    ~FileClass(){}
};

#endif //FILECLASS_H