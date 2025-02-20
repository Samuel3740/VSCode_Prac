#include <iostream>
using namespace std;

class charge{
private:
    int Quarter, Dime, Nickel, Penny;

public:
    void Change_Exchange(int input){
        Quarter = input / 25;
        Penny = input % 25;

        Dime = Penny / 10;
        Penny %= 10;

        Nickel = Penny / 5;
        Penny %= 5;

        cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << endl;
    }
};

int main(){
    int T;
    cin >> T;

    charge func;


    for(int i = 0; i < T; ++i){
        int input;
        cin >> input;
        func.Change_Exchange(input);
    }
}