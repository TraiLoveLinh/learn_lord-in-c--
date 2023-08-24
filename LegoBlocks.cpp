#include <iostream>

using namespace std;

// declare the "modulo" int 10^9 + 7 it's needed to avoid int overflow
const int modulo = 1000000000 + 7;

// max height and width of the wall
const int maxn = 1000;

// initialize a matrix and two vectors of the max dimension (we'll use them later..)
long long T[maxn + 1][maxn + 1];
long long B[maxn + 1], G[maxn + 1];

// create a viud function to initialize the matrix T
void init()
{
    T[1][0] = 1;

    // fix the row i=1 and iterate throgh all the columns (from second)
    for (int j = 1; j < maxn; j++)
    {
        T[1][j] = T[1][j - 1];

        if (j >= 2)
        {
            T[1][j] += T[1][j - 2];
        }
        if (j >= 3)
        {
            T[1][j] += T[1][j - 3];
        }
        if (j >= 4)
        {
            T[1][j] += T[1][j - 4];
        }
        
        // now we use the module variable
        T[1][j] %= modulo;
    }

    // now we iterate through all the remaining elements of the matrix
    for (int i = 2; i <= maxn; i++)
    {
        for (int j = 1; j <= maxn; j++)
        {
            T[i][j] = T[i-1][j] * T[1][j];
            T[i][j] %= modulo;
        }
    }
}
// now we process with the main part of the program
int main()
{
    // first of all we call the init function to initialize the global matrix T
    init();

    // we read in input the number of operations to do
    int numberOfOperations;
    cin >> numberOfOperations;
    while(numberOfOperations--)
    {
        // read the input the height and the width of the wall
        int n, m;
        cin >> n >> m;

        // initialize the second value of the two vectors
        B[1] = 0;
        G[1] = 1;

        // now iterate through all the remaining elements of the vector and matrix
        for (int j=2; j<=m;j++)
        {
            B[j]=0;
            for (int k=1;j<j;k++)
            {
                B[j] += T[n][j-k] * G[k];
                B[j] %= modulo;
            }
            G[j] = (T[n][j] + modulo - B[j]) % modulo;
        }

        // At this time, the m th element of the vector G is exactly our answer
        cout << G[m] << endl;
        
    }
    return 0;
}