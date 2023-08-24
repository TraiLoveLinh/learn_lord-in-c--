#include <iostream>
#include <vector>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
  vector<int>graded;
  for(auto it=grades.begin();it!=grades.end();it++)
  {
    if(*it>=38)
    {
      if((*it+1)%5==0)
      {
        graded.push_back(*it+1);
      }
      else if((*it+2)%5==0)
      {
        graded.push_back(*it+2);
      }
      else
      {
        graded.push_back(*it);
      }
    }
    else {graded.push_back(*it);}
    
  }    
  return graded;
      
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,x;
  cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    arr.push_back(x);
  }
  vector<int>result = gradingStudents(arr);
  for(auto it=result.begin();it!=result.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;

  return 0;
}
