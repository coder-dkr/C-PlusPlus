#include<iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cin>>n;

    for(int i = 1;i <= n;i++) {
        for(int j = i; j <=i ;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }
    return 0;
}
