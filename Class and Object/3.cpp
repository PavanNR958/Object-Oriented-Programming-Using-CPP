#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    
    A()
    {
        a=5;
    }
    friend void modifya();
        

};

void modifya()
{
    A obj1;
    cout<<"Private member of class A, "<<obj1.a;
}
int main() {
    A obj1;
    modifya(); //  o/p is Private member of class A, 5
    return 0;
}

