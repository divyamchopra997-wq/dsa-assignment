#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]); 
    }
}

int main() {
    int n = 8;
    vector<int> arr(n); 
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reversearray(arr);

    cout << "Reversed array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
