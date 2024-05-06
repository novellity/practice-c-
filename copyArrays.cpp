#include <iostream>
using namespace std;

int main() {
    int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8}, b[3];

    for(int i = 0; i < 8; i++) {
        cout<<"a[" << i << "] = "<<a[i]<<endl;
    }

    for(int i = 3; i <= 5; i++) {
        b[i - 3] = a[i];
    }
    cout<<endl;

    for(int i = 0; i < 3; i++) {
        cout<< "b[" << i << "] = " << b[i] << endl;
    }


    return 0;
}