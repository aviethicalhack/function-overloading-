#include<iostream>
using namespace std;

 int cube(int a)
  {
    int j;
    j=a*a*a;
    return j;
  }
  float cube ( float b)
  {
   float k;
   k=b*b*b;
   return k;
  }
  void display(int j,float k)
  {
    cout<<" the value of j:"<<j<<endl<<" the value of k:"<<k<<endl;

  }
int main() {
  int  j=cube(10);
  float k= cube(2.5f);
  display(j,k);
}
