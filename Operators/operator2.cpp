#include<iostream>
using namespace std;

int main(){
    //exaple of logical operator and Assignment operator 
    bool exp1=true;
    bool exp2=false;
    bool exp3=false;
    int a=1;//0001
    int b=3;//0011
    int x=8;
    
    cout<< "value of a is = "<< a<<endl;
    cout<<"value of b is = "<< b<<endl;
    cout<<(a | b)<<endl;//0011=3
    cout<<(a & b)<<endl;//0001=1
    cout<<(a ^ b)<<endl;//0010=2
    cout<< ~x <<endl;
    cout<< (x<<2)<<endl;//32
    cout<<(x>>2)<<endl;//2
    cout<<sizeof(a)<<endl;

    a==2?a=4:a=9;

    cout<<"value of a after using ternary operator : "<<a<<endl;
    cout<<(&a)<<endl;

   
    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;
    cout<<(!exp2)<<endl;
    a+=a;
    cout<<"Value of a after a+=a :- "<<a<<endl;
    b+=1;
    cout<<"value of b after b+=1 :- "<<b<<endl;
    cout<<(4+2+"pqr")<<endl;
    cout<<(exp1==exp2==exp3)<<endl;//1 Important 

}
