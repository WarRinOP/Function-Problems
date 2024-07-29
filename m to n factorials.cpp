#include<iostream>
using namespace std;

int factorial(int n) {
    int result=1;
    int i;
    for( i=1; i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){
    int n,m;
    cout<<"Enter your first digit: ";
    cin>>n;
    cout<<"Enter your last digit: ";
    cin>>m;
    for(int i=n;i<=m;i++){
       cout<<(factorial(i))<<" ";

}
}