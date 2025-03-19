#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    char a;
    cin>>a;
    cout<<typeid(a).name();
}