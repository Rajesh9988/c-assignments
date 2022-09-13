#include <iostream>
#include <conio.h>

using namespace std;
class time
{
private:
    int hh;
    int mm;
    int ss;

public:
    void settime(int x, int y, int z)
    {
        hh = x;
        mm = y;
        ss = z;
    }
    void setvalue()
    {
        cout << "Time is:> ";
        cout << hh << " hr "<< ": " << mm << " min "<< ": " << ss << " sec " << endl;
    }
};

int main()
{
    time o1;
    o1.settime(12, 34, 12);
    o1.setvalue();
}