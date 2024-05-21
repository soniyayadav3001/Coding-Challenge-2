#include<iostream>
using namespace std;

int main() {
    int arr[4];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
    } 
    cout << "Array elements are : " << endl;
    for (int i = 0; i < 4;i++){
        cout << arr[i];
    }
    cout << endl;
    cout << "Reversed array elements are : " << endl;
    for (int i = 3; i >= 0;i--){
        cout<<arr[i];
    }
        return 0;
}
