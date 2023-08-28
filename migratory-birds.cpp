#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[6];
    memset(a, 0, sizeof(a));
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        a[num]++;
    }
    int id=1;
    int max=0;
    for(int i=1;i<6;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            id=i;
        }
    }
    cout<<id<<endl;
    // system("pause"); 
    return 0;
}