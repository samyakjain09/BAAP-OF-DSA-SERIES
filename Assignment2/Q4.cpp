#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int area =a*b;
    int parameter=a+b;
    if (area>parameter){
        cout<<"area is greater";
    }else {
        cout<<"paramter is greater";
    }
}