#include<bits/stdc++.h>
using namespace std;

int main() {
    int array[5];

    cout << "Give array elements (5): " << endl;

    for(int i=0; i<5; i++) {
        cout << "Element " << i+1 << " : ";
        cin >> array[i];
    }

    int maximum = array[0];

    for(int i=0; i<5; i++) {
        if(array[0] < array[i]) {
            maximum = array[i];
        }
    }

    cout << "Maximum number is " << maximum << endl;

    return 0;
}