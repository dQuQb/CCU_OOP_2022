#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float n;
    while(cin >> n) {
        cout << fixed << setprecision(1) << round(n*n*10)/10 << endl;
    }
}