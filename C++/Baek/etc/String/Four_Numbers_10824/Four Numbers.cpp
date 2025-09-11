#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    
    string AB = to_string(A) + to_string(B);
    string CD = to_string(C) + to_string(D);
    
    int result = stoi(AB) + stoi(CD);
    
    cout << result << endl;
    
    return 0;
}