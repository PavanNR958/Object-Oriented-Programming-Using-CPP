#include<iostream>
using namespace std;
class A{
     public:
    A(){
        cout<<"A"<<endl;
    }
   
   
    A(int a){
        cout<<a;
    }
};
class B{
    A obj1;
    public:
    B(){
        cout<<"B";
    }
};
int main(){
    B obj1;
    B obj2; 
/* o/p is 
A
BA
B
*/
    return 0;
}
