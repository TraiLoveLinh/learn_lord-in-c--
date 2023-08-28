#include <iostream>
#include <stdlib.h>
using namespace std;
int min(int a, int b){
    return a < b ? a : b;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<min(div(p,2).rem, div(n-p,2).rem)<<endl;
    // cout<<div(n-p,2).quot<<endl;
    system("pause");
    return 0;
}