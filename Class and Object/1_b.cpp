#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void modify_a(int x){
        a=x;
        
}
};
int main() {
    A aa;
    aa.modify_a(10);
    cout<<aa.a<<endl;//op is 10
    return 0;
}

