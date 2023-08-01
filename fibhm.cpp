#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    int f1 = 0;
    int f2 = 1;
    if (n <= 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        /* code */
        printf("%d %d\n",1,f1);
        printf("%d %d\n",2,f2);
        int i = 2;
        int f;
        while (i <= n)
        {
            f = f1 + f2;
            i = i + 1;
            f1 = f2;
            f2 = f;
            //cout<<f<<endl;
            printf("%d %d\n",i,f);
        }
        printf("\n");
        return f;
    }
}

int main()
{
    int n = 40;
    int result = fib(n);
    cout << fib(n) << endl;

    return 0;
}