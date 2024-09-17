#include<iostream>
using namespace std;
int main() {
    float val = 20.5; 
    float *ptr;
    ptr = &val;
    cout << "The value is " << *ptr << endl;
    return 0;
}
