#include<iostream>
using namespace std;
int main() {
    int arr[4], sum =0;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 4;i++){
        sum= sum+arr[i];
    }
    cout << "The sum of elements of array is : " << endl;
    cout << sum;
    return 0;
}
