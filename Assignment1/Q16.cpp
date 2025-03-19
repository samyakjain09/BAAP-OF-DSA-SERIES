#include <iostream>
using namespace std;
int main(){
    int a1;
    int a2;
    int b1;
    int b2,sum;
    cout <<"Enter x1 ";
    cin>>a1;
    cout <<"Enter x2 ";
    cin>>a2;
    cout <<"Enter y1 ";
    cin>>b1;
    cout <<"Enter y2 ";
    cin>>b2;
    sum=((a1*b2)+(a2*b1))/(a1*b2);
    cout<<sum;
}