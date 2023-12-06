#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username = "joey";
    string password = "redhat";
    string user;
    string pass;
    cout << "Hello, Welcome to the App Login!" <<endl;
    cout<<"\n**********************************************"<<endl;
    
	cout << "Enter Your username: ";
        cin >> user;
    
	if (user == username)
	{
	        cout << "Enter password: " << endl;
	        cin >> pass;
	        if (pass == password)
		 {
	                 cout << "Successfully Login!!" << endl;
	         }
	        else
		{
                  cout << "Incorrect Password!" << endl;
                }
     }
    else 
	  {
            cout << "Incorrect Username!" << endl;
          }
return 0;
}
