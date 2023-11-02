#include <iostream>
using namespace std;
void printArray(const int a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}
int maxEvenIndex(int a[], int n) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] > a[index]) {
            index = i;
        }
    }
    return index;
}
int main() {
    int n = 8;
    int a[8] = { 1,6,7,4,3,9,2,10};
    printArray(a, n);
    int  index = maxEvenIndex(a, n);
    cout << "maxEvenIndex =" << index << endl;
    return 0;
}