#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, i, j, k; 
    cin >> N >> M;
    
    vector<int> arr(N, 0);
    
    for(int n = 0; n < M; ++n){
        cin >> i >> j >> k;
        for(int n = i - 1; n < j; ++n){
            arr[n] = k;
        }
    }
    
    for(int u = 0; u < N; ++u){
        cout << arr[u] << " ";
    }
}