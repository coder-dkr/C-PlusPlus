//Writing loops
#include<iostream>
using namespace std;

int main () {
    int n,i;
    cout<<"Print natural numbers till : ";
    cin>>n;
    
    //  for loop - entry controlled loop
    for(i = 1;i <= n;i++) {
        cout<<i<<"  ";
    }
    
    //  while loop - entry controlled loop
    i = 1;
    while(i <= n) {
        cout<<i<<"  ";
        i++;
    }
    
    //  do-while loop - exit controlled loop
    i = 1;
    do {
        cout<<i<<"  ";
        i++;
    } while(i <= n);
    return 0;
}
