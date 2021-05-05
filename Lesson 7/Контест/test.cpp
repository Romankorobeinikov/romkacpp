#include <iostream>

using namespace std;

int main()
{
    int c;
    int A[8];
    A = getline();
    for (int i = 0; i < (8 / 2); i++) {
        c = A[i];
        A[i] = A[8 - 1 - i];
        A[8 - 1 - i] = c;
    }
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
