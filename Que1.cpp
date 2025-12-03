#include <iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
bool find_duplicate(int arr[] , int n){
  unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr[4]= {1,2,3,1};
    int n=4;
    if(find_duplicate(arr,4)){
      cout<<"There is a duplicate element";
        }
    else{
    cout<<"There is no duplicate element";
      }
  return 0;
}
