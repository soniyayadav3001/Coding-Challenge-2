#include<iostream>
using namespace std;
int main() {
 int arr[4] , c=0;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < 4;i++){
        cin >> arr[i];
    }
    cout << "Array elements are : " << endl;
    for (int i = 0; i < 4;i++){
        cout << arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;  // Increment the duplicate counter if a duplicate is found
                break;  // Exit the inner loop as soon as a duplicate is found
            }
        }
    }
    cout << endl;
    cout << "Number of duplicate elements are : " << endl;
    cout<< c << endl;
    return 0;
}
