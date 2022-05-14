#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int ,string> p;
    //p=make_pair(2,"abc");
    p={2,"abc"};
    pair<int,string> p1=p; // copy is stored in p1 of p thats why value of first varable is not changed in p
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string> &p2=p; //actual pair is stored whats why there is changes n both
    p2.first=3;
    cout<<p2.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    //taking input
    //cin>>p.first>>p.second;
    

    //pair of array
    pair<int,int> my_arr[3];
    my_arr[0]={1,2};
    my_arr[1]={3,4};
    my_arr[2]={5,6};
    swap(my_arr[0],my_arr[2]);
    for(int i=0;i<3;i++){
        cout<<my_arr[i].first<<" "<<my_arr[i].second<<endl;

    }
}
