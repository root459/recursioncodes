#include<iostream>
using namespace std;
void counting(int a){
    if(a==0)
    return;
//tail recurison
cout<<a<<endl;
    counting(a-1);
        //head recursion
        cout<<a<<endl;
        
        
}
int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    counting(a);
}
    