#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    (num%2==0)?cout<<"Even"<<endl:cout<<"odd"<<endl;;//using ternary operator 

    if(num>80){
        cout<<"A+";

    }else if(num>50 && num<=80){
        cout<<"B+";
    }else if(num>35 && num<=50){
        cout<<"C+";
    }else{
        cout<<"Fail"<<endl;
    }

    if(num<12){
        cout<<"Child"<<endl;
    }else if(num>=12 && num<=18){
        cout<<"Teenager"<<endl;
    }else{
        cout<<"Adult"<<endl;
    }

}