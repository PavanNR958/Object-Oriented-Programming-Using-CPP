#include<iostream>
using namespace std;
class myClass{
   
    int a;
    public:
    myClass(int x){
        a=x;
        cout<<"Constructor "<<a<< endl;
    }
    int getvalue(){
        return a;
    }
};
int main(){
    myClass obj1(1), obj2;
    obj1.getvalue();
    obj2.getvalue(); // error due to only one  constructor no default const
    return 0;
}
