//Find largest number in array
#include<iostream>
using namespace std;

int main () {
    int num[]={2,4,5,3,6,8,5,4,11,9};
    int larg =num[0];
    int pos = 0;
    int i;
    for(i=0;i<10;i++){
        if(larg<num[i]){
            larg =num[i];
            pos =i;
        }
    }
    cout<<"largest  number  : "<<larg<<endl;
    cout<<"position : "<<++pos;
    return 0;
}
