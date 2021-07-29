#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

class Message
{
private:
    std::string data_;
public:
    Message(std::string data);
    ~Message();

    void print();
    void print(std::string data);
};


#endif //MESSAGE_H