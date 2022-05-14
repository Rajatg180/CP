 #include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={2,3,4,5,6};
  for(int value : v){
      cout<<value<<" ";

  }
  cout<<"\n\n"<<endl;
  for(int &value : v){
      value++;
      cout<<value<<" ";
  }
  cout<<"\n\n"<<endl;
  for(int value : v){
      cout<<value<<" ";
  }
  return 0;
}
/*
 for(int value : v){
      value++;  ----> No change in value becoze value will be copy no actuall value is passes
  }
  for(int value : v){
      cout<<value<<endl;
  } 

  //pair of vector
  vector<pair<int,int>> v={{2,3},{4,5},{6,7}}
  for(pair<int,int> value : v){
      cout<<value.first<<" "<<value.second<<endl;
  }  

*/
// AUTO KEYWORD--->dynamically determine the data type of variable 