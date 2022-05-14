#include<bits/stdc++.h>
using namespace std;
void print(set<string> &m){
    for(string value: m){
        cout<<value<<endl;
    }
    /* 
    ------>printing using iterator<----------- 
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it)<<endl;
    }
    */
}
int main(){
    set<string> s;
    s.insert("abc");//log(n)
    s.insert("zsd");
    s.insert("bcd");
    auto it=s.find("abc"); //find function return iterator 
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }
    else{
        cout<<"Key not found "<<endl;
    }
    cout<<"Count ->"<<s.count("abc")<<endl;
     print(s);

}
/* ------------------ORDERED SET----------
/*
1) Set output is in sorted order 
2) Unique element is stored in SET  
3) while doing comperision of two set first element of both set is compered 
4) element are return in sorted order

*/


/*-------------------UNORDERD SET------------
1) inbuilt implementation-->hash value of each key is calculated basically hash table is used 
2) time complexity ---> insertion and excess time complexity becomes O(1) and find() and erase() is also O(1)
3) valid keys datatypes 
4) print element in unsorted order
*/


/*-------------------multiset----------
1) implemention---> multiset<string> s;
2) time complexity for each function is (logn)
3) insertion takes multiple time 
4) while finding it will return iterator of first ocerance 
5) deletion
  a) s.delete(it)--->delete key at that particular iterator---->time complexity becomes O(1) 
  b) s.delete("abc")---->delete all "abc" in set ---->time complexity becomes O(log n)

*/