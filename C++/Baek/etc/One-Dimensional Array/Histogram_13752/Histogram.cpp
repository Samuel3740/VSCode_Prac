#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int j = 0; j < n; ++j){
        for(int k = 0; k < arr[j]; ++k){
            cout << "=";
        }
        cout << "\n";
    }
}