#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" <<endl;
    cout << "enter number of lines in triangle";
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            cout << " ";
        }
        for (int k = 0; k <=i ; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=n;k>i;k--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
