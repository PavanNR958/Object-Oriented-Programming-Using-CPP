#include<iostream>
#include<conio.h>
using namespace std;
class B{
    
    public:
    virtual ~B()=0;
};

class D: public B{
    
    public:
     ~D(){
        cout<<"Derived destructor"<<endl;
    }
    ~B(){
         cout<<"base destructor"<<endl;
    }
};
int main(){
    B *b=new D();
    delete b;
   return 0;
   /* o/p is error due to constructor
   */
}
