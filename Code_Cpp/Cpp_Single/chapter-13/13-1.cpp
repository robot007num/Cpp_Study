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
        cout <<"id : " << id <<  " it's being destroyed" << endl;
    }
};

int Counted::count =0;

int main()
{
    
        Counted * count_ = new Counted[10];

        delete []count_;

        getchar();
}