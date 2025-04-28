#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long long a;

    double side = sqrt(static_cast<double>(a));
    double perimeter = 4.0 * side;

    cin >> a;

    cout << fixed << setprecision(10) << perimeter << endl;
}