#include<iostream>
using namespace std;
class A{
   int a;
    public:
    A (){
        a=0;
    }
    void operator++ (int){
      
        a+=3;
    }
    void print(){
        cout<<a<<endl;
    }
};


int main()
{
    A obj1;
    for (int i=0;i<5;i++) obj1++;
    obj1.print();
    
    
    return 0;//op is 15
}