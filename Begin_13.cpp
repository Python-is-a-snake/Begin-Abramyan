//Begin 13
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int r_1 = 8;
    int r_2 = 4;
    int s_1 = 3.14 * pow(r_1, 2);
    int s_2 = 3.14 * pow(r_2, 2);
    int s_3 = s_1 - s_2;
    cout << "S1 = " << s_1 << "\n";
    cout << "S2 = " << s_2 << "\n";
    cout << "S3 = " << s_3;
    return 0;
}
