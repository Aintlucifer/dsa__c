#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int itemId;
    int weight;
    int profit;
    float pByw; // profit/weight
    float xi;
} Item;

void bubbleSortRev(Item *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j].pByw < arr[j + 1].pByw)
            {
                // Swap items
                Item temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float fractionalknapsack(Item *items, int n, int capacity)
{
    bubbleSortRev(items, n);
    float profit = 0;
    int i = 0;
    int takenWeight = 0;
    for (i = 0; i < n; i++)
    {
        if (takenWeight + items[i].weight <= capacity)
        {
            profit += items[i].profit;
            takenWeight += items[i].weight;
            items[i].xi = 1;
        }
        else
        {
            items[i].xi = ((float)capacity - takenWeight) / items[i].weight;
            takenWeight += items[i].xi * items[i].weight;
            profit += items[i].xi * items[i].profit;
            break;
        }
    }

    return profit;
}

int main()
{
    int n, i, knapsackCapacity;
    printf("How many items? ");
    scanf("%d", &n);

    Item *items = (Item *)malloc(sizeof(Item) * n);
    for (i = 0; i < n; i++)
    {
        printf("Enter itemId, weight, profit : ");
        scanf("%d %d %d", &items[i].itemId, &items[i].weight, &items[i].profit);
        items[i].pByw = (float)items[i].profit / items[i].weight;
    }

    printf("Enter knapsack Capacity? ");
    scanf("%d", &knapsackCapacity);

    float totalProfit = fractionalknapsack(items, n, knapsackCapacity);

    printf("Total Profit %f\n", totalProfit);

    return 0;
}

