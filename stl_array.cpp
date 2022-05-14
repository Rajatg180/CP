#include<iostream>
#include<array>
using namespace std;
int main(){
    //stl array decleration 
    array<int,4> a={1,2,3,4};
    //size of array 
    cout<<"Size->"<<a.size()<<endl;
    //return element at 2 index
    cout<<"Element at 2 index ->"<<a.at(2)<<endl;
    cout<<"Starting element of array 'a' is ->"<<a.front()<<endl;
    cout<<"Ending element of array 'a' is ->"<<a.back()<<endl;
    cout<<"Array is empty or not ->"<<a.empty()<<endl;
    return 0;
}