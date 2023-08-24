#include <iostream>
#include <vector>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges); 
int main()
{
  int s,t,a,b,m,n,x;
  vector<int>oranges,apples;
  cin>>s>>t;
  cin>>a>>b;
  cin>>m>>n;
  for(int i=0;i<m;i++)
  {
    cin>>x;
    apples.push_back(x);
  }
  for(int i=0;i<n;i++)
  {
    cin>>x;
    oranges.push_back(x);
  }
  countApplesAndOranges(s,t,a,b,apples,oranges);

  return 0;
}
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
  int O=0;
  int A=0;
  for(auto it=apples.begin();it!=apples.end();it++)
    if(*it+a>=s&&*it+a<=t) A++;
  for(auto it=oranges.begin();it!=oranges.end();it++)
    if(*it+b>=s&&*it+b<=t) O++;
  cout<<A<<endl;
  cout<<O<<endl;
}
