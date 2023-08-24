#include <iostream>
#include <string>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2); 
int main()
{
  int x1,v1,x2,v2;
  cin>>x1>>v1>>x2>>v2;
  cout<<kangaroo(x1,v1,x2,v2);
  return 0;
}
//This is the simple and slow solution
string kangaroo(int x1, int v1, int x2, int v2) {
  int dx=x2-x1;
  int dv=v1-v2;
  return (dx%dv||dx*dv<=0)?"NO":"YES";
}
