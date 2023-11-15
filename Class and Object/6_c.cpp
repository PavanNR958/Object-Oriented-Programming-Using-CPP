#include<iostream>
using namespace std;
class A
{
    const int a;
    int b;
   
    public:
    
    A(int x, int y):a(x)
    {
        b=y;
    }
    void inc() const {
        b++;
    }
};


int main() {
    A obj1(2,4);
    obj1.inc(); //  o/p is error due to const
 
    return 0;
}

