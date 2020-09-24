//Begin 12
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int a = 8;
    int b = 6;
    int c = sqrt(pow(a,2 ) + pow(b, 2));
    int p = a + b + c;
    cout << "гипотенуза = " << c << "\n";
    cout << "периметр = " << p;
    return 0;
}
