#include<iostream>
using namespace std;
class A{
    public:
    int add(int x=0,int y=0){
        return y+x+20;
    }
    int add(int x,int y){
        return x+y;
    
    }   
};


int main()
{
    int a=3,b=9;
    A obj;
    cout<<obj.add()<<endl;
    cout<<obj.add(a,b)<<endl;
    
    return 0;//op is error
}