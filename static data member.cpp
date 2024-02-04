#include<iostream>
using namespace std;
class Demo{
  int x, y;
  static int z;
  public:
  void setdata(int a, int b){
    x = a;
    y = b;
    z = z + 1;
  }
  void getdata(){
    cout <<"The value of x is "<< x << endl;
    cout <<"The value of y is "<< y << endl;
    cout <<"The value of z is "<< z << endl;
  }
};
int Demo ::z = 0;
int main() {
  Demo aa, bb;
  aa.setdata(5, 10);
  aa.getdata();
  cout << "and again" << endl;
  bb.setdata(20, 30);
  bb.getdata();
  return 0;
}
