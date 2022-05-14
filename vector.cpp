#include<bits/stdc++.h>
using namespace std;
void get_vector(vector<int> v){
    cout<<"Size : "<<v.size()<<endl;
    //Time Complexity for size() function is O(1)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl; //O(1)
    }

}
int main(){
    vector<int> v;
    //vector<int> v(5)-----> Declare a vector of size 5
    int n;
    cout<<"Enter Size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value to push in vector : ";
        cin>>x;
        v.push_back(x); //O(1) //push_back() function connect the value of x at end of vector 
    }
    //return the number of memeory assign to object
    cout<<v.capacity()<<endl;//it will twice it capacity whenever we are pushing element in vector
    cout<<v.front()<<endl;//first element of vector
    cout<<v.back()<<endl;//last element of vector

    //swap(v.begin(),v.end());
    v.pop_back(); //pop_back() function pop last element of vector and time complexity for pop_back() function id O(1)
    get_vector(v);
}

/* operations
1) vector<int> v(10,3) ----> declare a vector of size 10 and inistilize 3 in all
2)  vector<int> v1=v; //time complexity for copying element of v in v1 is O(n) because it is copying each element
    v1.push_back(2); ------> There will be changes only in v1

3)  vector<int> &v1=v; //Actual vector is passed due to &
    v1.push_back(2); ------> There will be changes in both vector
    
4) Swaping vector 
   swap(v.begin(),v.end());
5) erasing element in vector 
   v.erase(v.begin()+4)-----> delete element at 5th position
6) erassing vector element between range 
   v.erase(v.begin()+3,v.begin()+5)

*/