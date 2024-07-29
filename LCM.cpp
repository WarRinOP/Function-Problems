#include<iostream>
using namespace std;
int lcm(int num1,int num2, int num3){
    int res=1;
    for(int i=max(num1,num2,num3);i<=(num1*num2*num3);i++){
        if(i%num1==0 && i%num2==0 && i%num3==0){
            res=i;
            break;
        }
    }
    return res;
}
int main(){
    int n1,n2,n3;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter fthird number: ";
    cin>>n3;
    cout<<"LCM of the 3 digits is: "<<lcm(n1,n2,n3);

}