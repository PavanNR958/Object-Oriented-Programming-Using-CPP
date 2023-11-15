#include<iostream>
#include<conio.h>
using namespace std;
class B{
    
    public:
    B(){
        
        cout<<"Class B"<<endl;
    }
};   
    
class C{
    
    public:
    C(){
        
        cout<<"Class C"<<endl;
    }
};   
class D: public C,B{
    
    public:
    D(){
        
        cout<<"Class D"<<endl;
    }
};   
int main(){
    B *b=new D();
   return 0;
   /* o/p is error due to private inhirtance 
   */
}
