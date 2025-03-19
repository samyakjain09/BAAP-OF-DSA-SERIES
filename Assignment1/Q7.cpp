#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number between 65 and 90 ";
    int a;
    cin>>a;
    if (a<=65){
        cout<<"Enter the number between 65 and 90";
    }
    if (a>=90){
        cout<<"Enter the number between 65 and 90";
    }else {
        char b=a;
        cout <<b;
    }
}