// Funciton overLoading
#ifndef STASH3_H
#define STASH3_H

// "./ require.h"   待补充.

typedef unsigned char * byte;

class Stash
{
private:
    /* data */
    int size_;              //Size fo each sacpe
    int quantity_;          //Number of storage spaces
    int next_;              //Next empty sacpe

    //Dynamically allocated array of bytes:
    byte storage_;
    void inflate(int increase);
public:
    //Stash(int size);        //Zero quantity
    //Stash(int size, int initQuantity);

    Stash(int size,int initQuantity =0);

    ~Stash();
    int add(void * element);
    void * fetch(int index);
    int count();
};




#endif //STASH3_H