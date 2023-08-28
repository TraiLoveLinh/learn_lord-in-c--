#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[k];
    memset(a, 0, sizeof(a));
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        num %= k;
        int complement = (num==0)?k:num;
        cnt+=a[k-complement];
        a[num]++;   
    }
    cout<<cnt;
    // system("pause");
    return 0;
}