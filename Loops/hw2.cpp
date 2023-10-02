#include<iostream>
using namespace std;
int main(){
    cout<<"Amastrong Number between 100 to 500 are: "<<endl;
    for(int i=0;i<500;i++){
        int sum=0;
        int t=i;
        while(t!=0){
            sum=sum+((t%10)*(t%10)*(t%10));
            t=t/10;
        }
        if(sum==1){
            cout<<i<<'\n';
        }
    }

}