#include<iostream>

using namespace std;

class Base
{
    int x;
    public:
        virtual void func() = 0;
        int getx()
        {
            return x;
        }

};

class Derived: public Base
{
    int y;
    public:
        void func()
        {
            cout<<"hey!"<<endl;
        }
};

int main()
{
    //Base b;
    Derived d;
    d.func();
    return 0;
}