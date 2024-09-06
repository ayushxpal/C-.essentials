#include<iostream>
using namespace std;

int main() {
    int a[100], i, n, k, item;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter values : ";
    for(i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "Enter the no. and its position : ";
    cin >> item >> k;
    k = k-1;
    for(i=n; i>=k; i--) {
        a[i+1] = a[i];
    }
    a[k]=item;
    cout << "Contents of the array : ";
    for(i=0;i<=n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}
