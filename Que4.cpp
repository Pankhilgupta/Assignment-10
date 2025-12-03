#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {4,5,1,2,1,4};
    int n = 6;

    unordered_map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]++;

    for(int i=0;i<n;i++){
        if(m[arr[i]] == 1){
            cout << arr[i];
            break;
        }
    }

    return 0;
}
