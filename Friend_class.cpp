#include <iostream>
using namespace std;

class A
{
private:
    int x=90;
    int y=120;

public:
    friend class B;
};

class B
{
public:
    void printData(A &obj)
    {
        cout << obj.x << " " <<obj.y << endl;
    }
};
int main()
{
    A obj;
    B obj1;
    obj1.printData(obj);
    return 0;
}
