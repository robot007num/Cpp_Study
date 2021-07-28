#include <iostream>
#include <cassert>
#include "Stash3.h"

const int increment = 100;

#if 0
Stash::Stash(int size)
{
    size_ = size;
    quantity_ = 0;
    next_ = 0;
    storage_ = NULL;
}
#endif

Stash::Stash(int size, int initQuantity)
{
    size_ = size;
    quantity_ = 0;
    next_ = 0;
    storage_ = NULL;
    inflate(initQuantity);
}

Stash::~Stash()
{
    if (storage_ != 0)
    {
        std::cout << " freeing storage " << std::endl;
        delete[] storage_;
    }
}

int Stash::add(void *element)
{
    if (next_ >= quantity_) //Enough space left?
        inflate(increment);

    //Copy element into storage
    //starting next empty space;

    int startBytes = next_ * size_;
    byte e = (byte)element;
    for (int i = 0; i < size_; ++i)
        storage_[startBytes + i] = e[i];
    next_++;
    return (next_ - 1); //Index number
}

void *Stash::fetch(int index)
{
    //requires(0 <= index,"Stash::fetch{=} index");
    if (index >= next_)
        return 0; //To indicate the end
    //Produce pointer to desired element:
    return &(storage_[index * size_]);
}

int Stash::count()
{
    return next_;
}

void Stash::inflate(int increase)
{
    assert(increase >= 0);
    if (increase == 0)
        return;
    int newQuantity = quantity_ + increase;
    int newBytes = newQuantity * size_;
    int oldBytes = quantity_ * size_;
    byte b = new unsigned char[newBytes];
    for (int i = 0; i < oldBytes; ++i)
        b[i] = storage_[i]; //Copy old to new
    delete[] storage_;      //Release old storage

    storage_ = b;             //Point to new memory
    quantity_ = newQuantity; //Adjust the size
}