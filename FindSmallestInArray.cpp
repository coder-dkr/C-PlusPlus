//Find smallest number in array
#include<iostream>
using namespace std;

int main() {
    int noe[]={5,3,6,7,2,1,5,8,9,4};
    int smallest = noe[0];
    int pos = 0;

    for(int i = 0;i < 10;i++) {
        if(smallest > noe[i]) {
            smallest = noe[i];
            pos=i;
        }
    }
    cout<<"smallest number : "<<smallest<<endl;
    cout<<" position : "<<++pos;
    return  0;
}
