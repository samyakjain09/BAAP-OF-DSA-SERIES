#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    cin>>n;
    int sum=0;
    for(i=0;i<=n;i++){
        sum=i+sum;
    }
    cout<<sum;
}