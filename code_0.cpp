#include <iostream>
using namespace std;

class StaticExample
{

private:
    int counter;
    static int counterStatic;

public:
    void setCounter(int c)
    {
        StaticExample::counter = c;
    }
    static void setC(int c){
        StaticExample::counterStatic = c;
    }
};

int main()
{
    StaticExample s = StaticExample();

    s.setC(1);

    return 0;
}
