#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    int getsum()
    {
        return (a+b);
    }
        

};
int main() {
    A obj1(3,7);
    A *ptr;
    ptr = &obj1;
    ptr->a=5;

    cout<<obj1.getsum()<<endl; //output is 12
    return 0;
}

