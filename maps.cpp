 /*
1) map is key , value pair
2) There are two types of maps : 
    1) normal map ---> stored in sorted order---> unique key 
    2) unorderd map --> not stored in sorted order  
3) Map are not continous memory location thats why we cannot use (i+1) in map 
*/

/*-------------------------------------ORDERD MAP-------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;//map decleration
    //instertion
    m[1]="abc";
    m[2]="def"; //o(logn) n-->current size of map  
    m[3]="ghu"; 
    m.insert(make_pair(4,"cds"));
    m.insert({5,"awq"});
    //printing map using iterator 
    map<int ,string > ::iterator it;
    for(it=m.begin();it != m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    //printing map using ranged based loop
    for(auto &pr : m){ //auto <==> map<int,string> 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"\n\n"<<endl;

    //find function return iterator and if the element is not present it return next element of lasst element
    auto i=m.find(3);
    //auto i=m.find(6);-->not found is print in this condition
    if(i==m.end()){
        cout<<"Not found"<<endl;
    } 
    else{
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    //erase function--> we can erasse by passing key value or iterator
    if(i!=m.end()){
        m.erase(i);
        //m.erase(3);
    }
    m.clear();//clear all map


    return 0;
}
/*
1) time complexity for excessing element from map is o(log n)
2) time complexity for find and erase function is o(log n)
3) when our key is string the time complexity for insert operatiob becomes s.size()*log(n)  where s.size() is size of string
*/



/*--------------------------------UNORDERD MAP-----------------------------------
1) inbuilt implementation-->hash value of each key is calculated basically hash table is used 
2) time complexity ---> insertion and excess time complexity becomes O(1) and find() and erase() is also O(1)
3) valid keys datatypes 
4) print element in unsorted orde
*/
