#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" <<endl;
    cout << "enter number of lines in triangle";
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=(i);j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; ++i) {
        for(int j=n-1;j>i;j--){
            cout << "* ";
        }
        cout << endl;

    }

    return 0;
}
