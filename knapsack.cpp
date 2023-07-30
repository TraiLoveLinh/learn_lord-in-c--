#include <bits/stdc++.h>
using namespace std;

struct Item
{
    /* data */
    int weight, profit;
    Item(int weight, int profit)
    {
        this->weight = weight;
        this->profit = profit;
    }
};

bool cmp(Item a, Item b)
{
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

double knapsack(Item arr[], int W, int n)
{
    double finalProfit = 0.0;
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= W)
        {
            W -= arr[i].weight;
            finalProfit += arr[i].profit;
        }
        else
        {
            finalProfit += arr[i].profit * ((double)W / (double)arr[i].weight);
            break;
        }
    }
    return finalProfit;
}

int main()
{
    int W = 100;
    Item a[] = {{10, 20}, {20, 30}, {30, 66}, {40, 40}, {50, 60}};
    int n = sizeof(a) / sizeof(a[0]);
    cout << knapsack(a, W, n) << endl;
    return 0;
}

