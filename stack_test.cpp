#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    stack<int> myStack;
    for (auto i = 0; i < 5; i++)
    {
        myStack.push(i);
    }
    
    cout<<myStack.size()<<endl;
    return 0;
}