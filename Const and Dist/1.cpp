#include<iostream>
using namespace std;
class myClass{
    char ch;
    int a,b;
    myClass(){
        cout<<"default constructor"<<endl;
    }
};
int main(){
    myClass obj; // error due to private constructor 
    return 0;
}
