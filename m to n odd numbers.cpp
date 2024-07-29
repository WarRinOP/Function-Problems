#include<iostream>
using namespace std;

bool isodd(int num1){

    if(num1%2==0){
        return false;
    }
    else{
        return true;
    }
}



int main(){
    int n,m;
    cout<<"Enter your first digit: ";
    cin>>n;
    cout<<"Enter your last digit: ";
    cin>>m;
    for(int i=n; i<=m;i++){
        if(isodd(i)){
            cout<<i<<" ";
        }
    }








}