#include <iostream>
using namespace std;

int main(){
    int N;
    
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << ' ';
        }


        cout << '*';


        if (i >= 2) {
            for (int j = 1; j <= (2 * i - 3); ++j) {
                cout << ' ';
            }
            cout << '*';
        }

        cout << '\n';
    }

    return 0;
}