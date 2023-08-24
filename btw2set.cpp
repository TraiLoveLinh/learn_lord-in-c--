#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int checkA(vector<int>a, int n, int k)
{  
    for(int i = 0; i < n; i++)
        if(k%a[i])
            return 0;
    return 1;
}
int checkB(vector<int>b, int n, int k)
{
    for(int i = 0; i < n; i++)
        if(b[i]%k)
            return 0;
    return 1;
}

int main()
{   
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i_a=0;i_a<n;i_a++)
        cin>>a[i_a];
    for(int i_b=0;i_b<m;i_b++)
        cin>>b[i_b];
    int cnt=0;
    for(int i=1;i<=100;i++)
        if(checkA(a,n,i)&&checkB(b,m,i))
            cnt++;
    cout<<cnt;
    // system("pause");
    return 0;
}