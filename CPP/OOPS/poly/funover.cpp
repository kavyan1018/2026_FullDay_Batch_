#include <iostream>
using namespace std;

class Demo
{

public:
    void add(int a, int b)
    {

        cout << "Addition : " << a + b << endl;
    }

    void add(int a, int b, int c)
    {

        cout << "Addition : " << a + b + c << endl;
    }

    void add(float a, float b)
    {

        cout << "Addition : " << a + b << endl;
    }
};

int main()
{

    Demo d;

    d.add(10, 20, 30);
    d.add(10.5f, 20.5f);
    d.add(10, 20);

    return 0;
}