#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr)
        cin >> x;

    for(int x : arr) {
        if(x < 0) {
            cout << x;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
