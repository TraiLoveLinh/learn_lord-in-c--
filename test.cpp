#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
  int alice=0,bob=0;
  for(int i=0;i<3;i++)
  {
    if(a[i]>b[i]) alice++;
    if(a[i]<b[i]) bob++;
  }
  return {alice,bob};
}

void plusMinus(vector<int> arr) {
  int negative=0;
  int positive=0;
  int zero=0;
  for (auto item:arr)
  {
    if(item>0)
    {
      positive++;
    }
    else if(item<0)
    {
      negative++;
    }
    else zero++;
  }
  int n = (int)arr.size();
  double rp = (double)positive/(double)n;
  double rn = (double)negative/(double)n;
  double rz = (double)zero/(double)n;
  printf("%.6f\n",rp);
  printf("%.6f\n",rn);
  printf("%.6f\n",rz);
}

int max(int a,int b,int c)
{
  if(a>=b && a>=c) return a;
  if(b>=a && b>=c) return b;
  return c;
}

int min(int a,int b,int c)
{
  if(a<=b&&a<=c)return a;
  if(b<=a&&b<=c)return b;
  return c;
}

int maxCross(vector<int>arr, int left, int right, int mid)
{
  int sumL=arr[mid];
  int sum=0;
  for(int i=mid;i>=left;i--)
  {
    sum+=arr[i];
    if(sum>sumL) sumL=sum; 
  }
  int sumR=arr[mid+1];
  sum=0;
  for(int j=mid+1;j<=right;j++)
  {
    sum+=arr[j];
    if(sum>sumR) sumR=sum;
  }
  return sumL+sumR;
}
int minCross(vector<int>arr, int left, int right, int mid)
{
  int sumL=arr[mid];
  int sum=0;
  for(int i=mid;i>=left;i--)
  {
    sum+=arr[i];
    if(sum<sumL) sumL=sum; 
  }
  int sumR=arr[mid+1];
  sum=0;
  for(int j=mid+1;j<=right;j++)
  {
    sum+=arr[j];
    if(sum<sumR) sumR=sum;
  }
  return sumL+sumR;
}
int maxSubArray(vector<int>arr, int left, int right)
{
  if(left==right) {return arr[left];}
  else
  {
    int mid = (left+right)/2;
    return max(
      maxSubArray(arr,left,mid),
      maxSubArray(arr,mid+1,right),
      maxCross(arr,left,right,mid)
    );
  }
}
int minSubArray(vector<int>arr, int left, int right)
{
  if(left==right) {return arr[left];}
  else
  {
    int mid = (left+right)/2;
    return min(
      minSubArray(arr,left,mid),
      minSubArray(arr,mid+1,right),
      minCross(arr,left,right,mid)
    );
  }
}

void staircase(int n) {
  int k=n-1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(j>=k) {cout<<"#";}
      else {cout<<" ";}
    }
    k--;
    cout<<"\n";
  } 
}

void miniMaxSum(vector<int> arr) {
  int min = 0;
  if(arr[0]+arr[1]+arr[2]+arr[3]<min) min = arr[0]+arr[1]+arr[2]+arr[3]; 
  if(arr[1]+arr[2]+arr[3]+arr[4]<min) min = arr[1]+arr[2]+arr[3]+arr[4]; 
  if(arr[0]+arr[2]+arr[3]+arr[4]<min) min = arr[0]+arr[2]+arr[3]+arr[4]; 
  if(arr[0]+arr[1]+arr[3]+arr[4]<min) min = arr[0]+arr[1]+arr[3]+arr[4]; 
  int max = 0;
 
  if(arr[0]+arr[1]+arr[2]+arr[3]>max) max = arr[0]+arr[1]+arr[2]+arr[3]; 
  if(arr[0]+arr[1]+arr[2]+arr[3]>max) max = arr[0]+arr[1]+arr[2]+arr[3]; 
  if(arr[0]+arr[1]+arr[2]+arr[3]>max) max = arr[0]+arr[1]+arr[2]+arr[3]; 
  if(arr[0]+arr[1]+arr[2]+arr[3]>max) max = arr[0]+arr[1]+arr[2]+arr[3]; 
  if(arr[0]+arr[1]+arr[2]+arr[3]>max) max = arr[0]+arr[1]+arr[2]+arr[3]; 
}

int main()
{
  int n;
  vector<int>arr;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  cout<<maxSubArray(arr,0,n-1);
  cout<<" ";
  cout<<minSubArray(arr,0,n-1);
  return 0;
}
