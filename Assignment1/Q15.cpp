#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n ";
    cin>>n;
    int b=0;
    for (int i=0;i<=n;i++){
        int a=pow(i,2);
        b = b+a;
    }
    cout<<b;
}