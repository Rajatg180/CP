#include<bits/stdc++.h>
using namespace std;
int main(){
    //max heap implementation
    priority_queue<int> maxi;
    //min heap implementation
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(6);
    int maxi_size=maxi.size();
    for(int i=0;i<maxi_size;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(7);
    int mini_size=mini.size();
    for(int i=0;i<mini_size;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
 
}
/*
1) In maximum heap greatest element will pop first
2) In minimum heap smallest element will pop first
*/