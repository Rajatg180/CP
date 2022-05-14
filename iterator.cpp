#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,6,4,3,7};
    vector<int> :: iterator it; // decleration of iterator 
    for(it=v.begin();it!=v.end();++it){
        cout<<(*(it+1))<<" ";
        cout<<(*it)<<endl;
    }

    //vector pair 
    vector<pair<int,int>> v_p={{2,3},{7,4},{5,6}};
    vector<pair<int,int>> :: iterator i;
    for(auto i = v_p.begin();i!=v_p.end();++i){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    } 
    for(auto i = v_p.begin();i!=v_p.end();++i){
    cout<<(i->first)<<" "<<(i->second)<<endl;
    } 


}
/*
1) it++ ----> give you the next iterator 
2) it+1 -----> give the next location ( not use in maps and set )
3) (*i).first <==> i->first 
4) The iterator which  points the first element of vector is called v.begin() iterator
5) The iterator which points the next element of last element of vector is called v.end() iterator
*/ 