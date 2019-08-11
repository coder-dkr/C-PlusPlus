// table of any number till any multiple

#include<iostream>
using namespace std;

int main(){
    int num,mul;

    cout<<"enter the number "<<endl;
    cin>>num;

    cout<<"enter it's multiplying limit "<<endl;
    cin>>mul;

    cout<<"so table of "<<num<<" is :"<<endl;

    for(int i=1;i<=mul;i++) { 
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}
