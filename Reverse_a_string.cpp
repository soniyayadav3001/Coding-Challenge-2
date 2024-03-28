#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s = "Tony stark";
    for (int i = s.size(); i >= 0;i--){
        cout << s[i];
    }
        return 0;
}
