#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int product = 1;

    for(int &x : arr) {
        cin >> x;
        product *= x;
    }

    cout << product;
}
