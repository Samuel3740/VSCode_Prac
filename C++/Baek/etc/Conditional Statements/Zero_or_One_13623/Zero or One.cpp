#include <iostream>
using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;

    if(A != B && A != C && B == C){
        cout << 'A' << endl;
    } 
    else if(B != A && B != C && A == C){
        cout << 'B' << endl;
    } 
    else if(C != A && C != B && A == B){
        cout << 'C' << endl;
    } 
    else{
        cout << '*' << endl;
    }

    return 0;
}