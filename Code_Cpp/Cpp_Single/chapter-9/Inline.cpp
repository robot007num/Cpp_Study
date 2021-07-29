#include <iostream>
using namespace std;

#include <windows.h>
#define BEGIN_RECORD                 \
    {                                \
        long ____temp_begin_time___; \
        ____temp_begin_time___ = ::GetTickCount();
#define END_RECORD(dtime)                              \
    dtime = ::GetTickCount() - ____temp_begin_time___; \
    }

class Point
{
    int i, j, k;

public:
    Point() : i(0), j(0), k(0) {}
    Point(int ii, int jj, int kk) : i(ii), j(jj), k(kk) {}

    void print(const string msg = "") const
    {
        if (msg.size() != 0)
            cout << msg << endl;

        cout << " i = " << i << " , "
             << " j = " << j << " , "
             << " k = " << k << endl;
    }
};

// void Point::print(const string msg)
// {
//     if (msg.size() != 0)
//         cout << msg << endl;

//     cout << " i = " << i << " , "
//          << " j = " << j << " , "
//          << " k = " << k << endl;
// }

int main()
{
    long time;
    BEGIN_RECORD

    //要测试的代码放在这里
    Point p, q(1, 2, 3);
    p.print("value of p");
    q.print("value of q");
    END_RECORD(time);

    //输出运行时间（单位：s）
    cout << "run time(:s):" << time << endl;

    getchar();
}