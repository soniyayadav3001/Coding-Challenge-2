#include<iostream>
using namespace std;

struct vehicle{
    int gear;
    int wheels;
};
int main() {
    struct vehicle v[3];
    cout << "Enter the details here : " << endl;
    for (int i = 0; i < 3;i++){
        cin >> v[i].gear >> v[i].wheels;
    }
    for (int i = 0; i < 3;i++){
        cout<<v[i].gear<<v[i].wheels;
    }
    
        return 0;
}
