#include <iostream>
using namespace std;


int main(){
    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        int spaces = i;
        int stars = 2 * (N - i) - 1;

        // 공백 출력
        for(int j = 0; j < spaces; j++){
            cout << ' ';
        }

        // 별 출력
        for(int j = 0; j < stars; j++){
            cout << '*';
        }

        cout << '\n';
    }

    return 0;
}