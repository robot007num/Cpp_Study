#include "Message.h"

Message::Message(std::string data)
{
    data_ = data;
}

Message::~Message()
{
}

void Message::print()
{
    std::cout<< data_<<std::endl;
}

void Message::print(std::string data)
{
    std::cout<<data <<","<<data_<<std::endl;
}