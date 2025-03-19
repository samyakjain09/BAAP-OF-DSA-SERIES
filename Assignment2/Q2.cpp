#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    cout<<"Enter the radius ";
    cin>>r;
    int area=3.14*pow(r,2);
    int circumfrence=2*3.14*r;
    if (area>circumfrence){
        cout<<"Area is greater than circumfreance";
    }else{
        cout<<"Area is circumfreance than greater  ";
    }
}