#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a1;
    int a2;
    int b1;
    int b2;
    cout <<"Enter x1 ";
    cin>>a1;
    cout <<"Enter x2 ";
    cin>>a2;
    cout <<"Enter y1 ";
    cin>>b1;
    cout <<"Enter y2 ";
    cin>>b2;
    int euclidean_distance;
    euclidean_distance=sqrt(pow(a1-a2,2)+pow(b2-b1,2));
    cout<<euclidean_distance;

}