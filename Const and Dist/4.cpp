#include<iostream>
using namespace std;
class myClass{
    char ch;
    int a,b;
    public:
    myClass(){
        a=0;b=0; ch='a';
    }
    myClass(char x){
        ch=x;
        cout<<"Constructor "<<a<< endl;
    }
    myClass(int x,int y){
        a=x;
        b=y;
    }
    int get(){
        cout<<a<<" "<<b<<" "<<ch<<endl;
    }
};
int main(){
    myClass obj1('z'), obj2, obj3(4,8);
    obj1.get();
    obj2.get();
    obj3.get();
     /*  o/p is 
    Constructor 6422356
6422356 4201083 z
0 0 a
4 8 ╠
*/
    return 0;
}
