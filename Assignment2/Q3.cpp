#include <iostream>
using namespace std;
int main(){
    int year;
    cout <<"Enter year ";
    cin>>year;
    if (year/4==0){
        cout<<"This year is leap year";
    }else {
        cout<<"This year is not a leap year";
    }
}