#include <iostream>

using namespace std;

class Counted
{
private:
    int id;
    static int count;

public:
    Counted() : id(count++)
    {
        cout << "id : " << id << " it being created" << endl;
    }

    ~Counted()
    {
        cout << "id : " << id << " it's being destroyed" << endl;
    }
};

int Counted::count = 0;

class PStash
{
private:
    Counted *count_;

public:
    PStash()
    {
        count_ = new Counted;
    }

    ~PStash()
    {
        // if(count_ !=NULL)
        // {
        //     delete count_;
        // }
        cout << " PStash it's being destroyed" << endl;
    }
};

int main()
{
    PStash * pstash_ =new PStash[5];
    delete []pstash_;
    getchar();
}