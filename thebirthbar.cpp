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

int main()
{
    int n;
    cin>>n;
    vector<int>s(n);
    for(int s_i=0;s_i<n;s_i++)
        cin>>s[s_i];
    int d,m;
    cin>>d>>m;
    int sum=0;
    for(int i=0;i<m;i++)
        sum+=s[i];
    int cnt=0;
    if (sum==d)
        cnt++;
    for(int i=m;i<n;i++)
    {
        sum+=s[i];
        sum-=s[i-m];
        if (sum==d)
            cnt++;
    }
    cout<<cnt<<endl;
    // system("pause");
    return 0;
}