#include<iostream>
using namespace std;
class A{
    public:
    int add(int x,int y,int z=0){
        return y+x+z;
    }
    int add(int x,int y){
        return x+y;
    
    }   
};


int main()
{
    int a=3,b=9, c=1;
    A obj;
    cout<<obj.add(a,b,c)<<endl;
    cout<<obj.add(a,b)<<endl;//op is error    ambuigity
    
    return 0;
}