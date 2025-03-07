#include<iostream>
using namespace std ;
int main (){
    double  s =0;
    int n;
    cout<<" nhap so nguyen n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+1/i;

    }
    cout<<s;
    return 0;
}