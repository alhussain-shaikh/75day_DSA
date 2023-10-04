/*
Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number ";
    cin>>n;
    int ans=0,power=1;
    while(n>0){
        int parity=n%2;
        ans+=parity*power;
        power*=10;
        n/=2;
    }
    cout<<"The binary conversion of the given number is "<<ans<<endl;
    string a=to_string(ans);
    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='0'){
            count+=1;

        }
    }
    cout<<"No of 0 in binary number is "<<count<<endl;

}