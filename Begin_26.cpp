//Begin 26
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int x = 25;
    int y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
    cout << "При x = 25: " << y;
    return 0;
}
