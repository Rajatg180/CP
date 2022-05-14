#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    //pushing element in deque from front
    d.push_front(2);
    //pushing from back;
    d.push_back(1);
    for(int i: d){
        cout<<i<<" ";
        
    }
    //poping element from back 
    cout<<endl;
    d.pop_back();
    for(int i: d){
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}