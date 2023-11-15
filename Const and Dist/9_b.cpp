#include<iostream>
using namespace std;
class A{
     public:
    A(){
        cout<<"A";
    }
   
   
    A(int a){
        cout<<a;
    }
};
class B{
    A obj1;
    public:
    static A ob;
    B(){
        cout<<"B";
    }
};
int main(){
    B obj1;
    B obj2; 
/* o/p is 
ABAB
*/
    return 0;
}
