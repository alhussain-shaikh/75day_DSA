/*
Types of Loop
1. For 
2. While
3. Do while

*/
#include<iostream>
using namespace std;
int main(){
    //while loop
    int i=1;
    while (i<5)
    {
        cout<<i<<endl;
        i++;
    }

    //Print the sum of of n natural number where n is the input

    int num;
    cout<<"Enter the num: ";
    cin>>num;
    int sum=0;
    int j=1;
    while(j<=num){
        sum+=j;
        j++;
    }
    cout<<"The sum of n natural no is "<<sum<<endl;

    //For loop
    int sum_for=0;
    for(int n=1;n<=num;n++){
        sum_for+=n;
        
    }
    cout<<"Sum_for = "<<sum<<endl;

    //1.Omitting init statement 
    int k=1;
    for(;k<5;k++){
        cout<<k<<endl;
    }
    //Print the first Multiple of 5 which is also a multiple of 7
    for(int a=5;;a+=5){
        if (a%7==0){
            cout<<a<<endl;
            break;
        }
    }

    //do while loop
    //Print the sum of the stream of N interger in the input using the do while loop 
    int sum_whi=0;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int z=1;
    do{
        sum_whi+=z;
        z++;
    }while (z<=b);
    cout<<"Sum_while = "<<sum_whi<<endl;

    //continue (if you to skip any iteration)
    //Print all the values between 1 to 50 except for the multiple of 3
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
     

}