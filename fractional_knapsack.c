#include <stdio.h>
#include <stdlib.h>
#define size 5 //this is the total no of items


typedef struct {
    int weight;
    int profit;
    float pw;
} Item;

void swap(Item* itm1, Item* itm2) {
    Item temp = *itm1;
    *itm1 = *itm2;
    *itm2 = temp;
}

void bubble_sort(Item* items) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (items[j].pw < items[j + 1].pw) {
                swap(&items[j], &items[j + 1]);
            }
        }
    }
}

int knapsack(Item* items,int capacity){
int max_profit=0;
for (int i = 0; i < size; i++) {
        if (capacity >= items[i].weight) {
            max_profit += items[i].profit;
            capacity -= items[i].weight;
        } else {
            // If remaining capacity is less than current item's weight,
            // take a fraction of the item
            max_profit += (capacity * items[i].profit) / items[i].weight;
            break; // Exit loop since knapsack capacity is exhausted
        }
    }
    
    return max_profit;
}

int main()
{
    Item items[size] = {
        {5, 30},
        {10, 20},
        {20, 100},
        {30, 90},
        {40, 160}
    };
    for(int i=0;i<size;i++){
        items[i].pw=((float)items[i].profit/(float)items[i].weight);
    }
    int capacity=60;

bubble_sort(items);

float profit=knapsack(items,capacity);

for(int i=0;i<size;i++){
    printf("%.2f ",items[i].pw);
}

printf("\nThe Max profit is:%.2f",profit);

return 0;
}