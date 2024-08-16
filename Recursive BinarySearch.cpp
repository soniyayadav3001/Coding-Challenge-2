#include<iostream>
using namespace std;
int binarySearch(int arr[],int low , int high , int key){
    if(low>high){
        return -1;
    }
    int mid = (low + high) / 2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binarySearch(arr, mid + 1, high, key);
    }
    else{
        return binarySearch(arr, low, mid - 1, key);
    }
}
int main() {
    int arr[] = {1,3,5,7,9};
    int key = 5;
    int result = binarySearch(arr, 0, 4, key);
    if(result==-1){
        cout << "Element not found !" << endl;
    }
    else{
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
