#include<iostream>
using namespace std;
void swapNos(int a, int b){
    cout<<"After Swaping..."<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of a:"<<a<<endl;
    cout<<"The value of b:"<<b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    swapNos(a,b);
    return 0; 
}