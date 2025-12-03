#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1,3,2,1,3,2};
    int n = 6;

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto p : m){
        cout << p.first << "->" << p.second << " times" << endl;
    }

    return 0;
}
