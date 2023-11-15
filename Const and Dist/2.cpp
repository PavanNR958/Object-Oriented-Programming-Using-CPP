#include<iostream>
using namespace std;
class A{

    A(){
        cout<<"default constructor"<<endl;
    }
    public:
    int a;
    A(int a){
        this->a=a;
    }
};
int main(){
    A a(10);
    cout<<a.a; // o/p is 10
    return 0;
}
