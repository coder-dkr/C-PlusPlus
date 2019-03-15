
/*#include<iostream>
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

//Code for reverse star pattern
#include<iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cin>>n;

    for(int i = 1;i <= n;i++) {
        for(int j = i; j <=n;j++) {
            cout<<'*';
        }
        cout<<'\n';
    }    
    return 0;
}

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
}*/

#include<iostream>
using namespace std;

int main () {
    int num[]={2,4,5,3,6,8,5,4,11,9};
    int larg =num[0];
    int posi = 0;
    int i;
    for(i=0;i<10;i++){
        if(larg<num[i]){
            larg =num[i];
            posi =i;
        }
    }
    cout<<"largest  number  : "<<larg<<endl;
    cout<<"position : "<<++posi;
    return 0;
}
