#include <iostream>
#include <vector>
using namespace std;
bool checkA(vector<int>& a, int n, int k)
{
    for(int i=0;i<n;i++)
        if(k%a[i])
            return 0;
    return 1;
}
bool checkB(vector<int>& b, int m, int k)
{
    for(int i=0;i<m;i++)
    {
        if(b[i]%k)
            return 0;
    }
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int cnt=0;
    for(int i=1;i<=100;i++)
        if(checkA(a,n,i)&&checkB(b,m,i))
            cnt++;
    cout<<cnt<<endl;
    system("pause");
    
    return 0;
}