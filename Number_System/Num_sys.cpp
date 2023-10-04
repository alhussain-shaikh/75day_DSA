#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter No of Bits Present in Binary Number:";
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the value of bit "<<i<<":";
    //     cin>>a[i];
    // }
    // int dec=0;
    // for(int i=0;i<n;i++){
    //     int x=a[i]*pow(2,i);
    //     dec=dec+x;

    // }
    // cout<<"Decimal number is"<<dec<<endl;

    int z;
    cin>>z;
    int ans=0;
    int power=1;
    while(z>0){
        int lastdigit=z%10;
        ans+=lastdigit*power;
        power*=2;
        z/=10;
    }
    cout<<"The Decimal value is "<<ans<<endl;
    
}