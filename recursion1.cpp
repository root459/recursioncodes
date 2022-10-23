#include<iostream>
using namespace std;
int p(int a){
    if(a==0)
    return 1;
    return 2*p(a-1);
    
}


int main(){
    int a;
    cout<<"enter the number of power";
    cin>>a;
    cout<<"the answer is"<<p(a);
}
