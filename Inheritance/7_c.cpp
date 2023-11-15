#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"A"<<x;
    }
    void get(){cout<<"Hi Arun";}
};
class B:protected A{
    public:
    B(int x, int y):A(y)
    {
        cout<<"B"<<x;
    }
};
class C:public B{
    public:
    C(int x, int y, int z):B(y,z){
        get();
        cout<<"C"<<x;
    }
};


int main()
{
    B a(2,3);
    a.get();//op is error due to protected  due to access outside
    return 0;
}