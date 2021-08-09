#include <iostream>
#include <vector>

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

    void f() {cout <<"I'm is "<< id<<endl;}
};

int Counted::count = 0;

int main()
{
    #if 0
    vector<Counted *> counteds;
    counteds.push_back(new Counted);

    Counted *test1 = new Counted;
    counteds.push_back(test1);

    for (int i = 0; i < counteds.size(); ++i)
    {
        //cout << counteds[i]->f()<<endl;
        counteds[i]->f();
    }

    for (int i = 0; i < counteds.size(); ++i)
        delete counteds[i];
    #endif

    
    Counted * test2 = new Counted[5];

    delete test2;

    getchar();
}