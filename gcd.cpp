#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b)
{
  while(a&&b)
  {
    if(a>=b)
      a%=b;
    else
      b%=a;
  }
  return a+b;
}
int lcm(int a,int b)
{
  return a/gcd(a,b)*b;
}
int main()
{
  cout<<gcd(123,321)<<endl;
  cout<<lcm(123,321)<<endl;
  return 0;
}
