#include<iostream>
using namespace std;
char *p[]={"hello,", "this","is","arun"};
char **q[]={p+3, p+2, p+1,p};
char ***r=q;
// namespace std;
int main(){
    
    

    cout<<**++r<<" "<<endl;
    
    cout<<*--*++r+2<<" "<<endl;
 
    cout<<*r[-2]+1<<" "<<endl;
    cout<<*r[-1][-1]+1<<endl;
    
    return 0;
}

