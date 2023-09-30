#include<iostream>
using namespace std;
int sumofTwo(int a,int b){
  return a+b;
}
int productofTwo(int a,int b){
    return a*b;
}
int Ascii(char u){
    return u;
}
int RectangleArea(int a, int b){
    return a*b;
}
int cube(int a){
    return a*a*a;
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    c=sumofTwo(a,b);
    cout<<"The sum of Two Number is :"<<c<<endl;
    c=productofTwo(a,b);
    cout<<"The product of Two Number is :"<<c<<endl;
    char u='U';
    int z=Ascii(u);
    cout<<"ASCII value of U is "<<z<<endl;
    cout<<"Area of Rectangle is "<<c<<endl;
    int y=cube(a);
    cout<<"Cube of "<<a<<" is :"<<y<<endl;
}