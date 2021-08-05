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
};

int Counted::count = 0;

int main()
{
    vector<Counted *> counteds;
    counteds.push_back(new Counted);

    Counted *test1 = new Counted;
    counteds.push_back(test1);

    for (int i = 0; i < counteds.size(); ++i)
    {
        cout << counteds[i]<<endl;
    }

    for (int i = 0; i < counteds.size(); ++i)
        delete counteds[i];

    getchar();
}