#include <bits/stdc++.h>
#define NIL -1
#define MAX 100
using namespace std;

int lookup[MAX];
void _initialize(){
    memset(lookup, NIL, sizeof(lookup));
    // for (int i = 0; i < MAX; i++){
    //     lookup[i] = NIL;
    // }
}
int fib(int n){
    _initialize();
    if (lookup[n] == NIL){
        if (n <= 1){
            lookup[n] = n;
        }
        else{
            lookup[n] = fib(n-1) + fib(n-2);
        }
    }
    return lookup[n];
}
int main(){
    printf("%d\n",fib(10));
    return 0;
}
