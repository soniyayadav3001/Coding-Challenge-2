#include<iostream>
using namespace std;
int main() {
 int arr1[4] , arr2[4] , sum[20];
    cout << "Enter elements of first array" << endl;

  for (int i = 0; i <4 ; i++)
    cin >> arr1[i];

  cout << "Enter elements of second array" << endl;

  for (int i = 0; i < 4; i++)
    cin >> arr2[i];

  cout << "Sum of elements of the arrays:" << endl;

  for (int i = 0; i < 4; i++) {
    sum[i] = arr1[i] + arr2[i];
    cout << sum[i] << endl;
  }
}
