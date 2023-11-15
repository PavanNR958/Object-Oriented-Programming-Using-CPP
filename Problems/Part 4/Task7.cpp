#include<iostream>
using namespace std;
long long fun(long long n){
    long long result=0;   //can old 10*18
    while(n!=0){
        result=result*10+ n%10;
        n/=10;
    }
    return result;
}
int main(){
    long long n;
    cin>> n;
    cout<<fun(n)<<endl;
     // o/p is 54392839873361 for input 16337893829345
    return 0;
}
