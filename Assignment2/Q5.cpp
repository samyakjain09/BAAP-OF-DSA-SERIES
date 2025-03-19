#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"1st side ";
    cin>>a;
    cout<<"2nd side ";
    cin>>b;
    cout<<"3rd side ";
    cin>>c;
    if(a==b==c){
        cout<<"traingle is equilateral";
    }if(a==b!=c||a!=b==c){
        cout<<"traingle is isoseles";
    }
    else{
        cout<<"traingle is scalar";
    }

}