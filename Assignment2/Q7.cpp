#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    if (x==0){
        cout<<"point lies on x axis";
    }
    if (y==0){
        cout<<"point lies on y axis";
    }
    if (x==0&&y==0){
        cout<<"point lies on origin";
    }
}