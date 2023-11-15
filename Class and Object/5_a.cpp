#include<iostream>
using namespace std;
class A
{
    int a;
    friend void modify(A ob);
    public:
    
    A()
    {
        a=5;
    }
    void get(){
        cout<<a<<endl;
    }
        

};

void modify(A ob)
{
    ob.a += 13;
}
int main() {
    A obj1;
    obj1.get();
    modify(obj1); //  o/p is "5 \n 5 " due to pass by value
    obj1.get();
    return 0;
}

