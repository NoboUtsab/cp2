#include <bits/stdc++.h>

using namespace std;

// Structure for an item which stores weight and
// corresponding value of Item
struct Item {
	int profit, weight;

	// Constructor
	Item(int profit, int weight)
	{
	this->profit=profit;
	this->weight=weight;
	}
};

// Comparison function to sort Item according to val/weight
// ratio
bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.profit / (double)a.weight;
	double r2 = (double)b.profit / (double)b.weight;
	return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int M, struct Item a[], int n)
{
	// sorting Item on basis of ratio
	sort(a, a + n, cmp);

	// Uncomment to see new order of Items with their
	// ratio
	/*
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].value << " " << arr[i].weight << " :
	"
			<< ((double)arr[i].value / arr[i].weight) <<
	endl;
	}
	*/

	int curWeight = 0; // Current weight in knapsack
	double finalprofit = 0.0; // Result (value in Knapsack)

	// Looping through all Items
	for (int i = 0; i < n; i++) {
		// If adding Item won't overflow, add it completely
		if (curWeight + a[i].weight <= M) {
			curWeight += a[i].weight;
			finalprofit += a[i].profit;
		}

		// If we can't add current Item, add fractional part
		// of it
		else {
			int remain = M - curWeight;
			finalprofit += a[i].profit
						* ((double)remain
							/ (double)a[i].weight);
			break;
		}
	}

	// Returning final value
	return finalprofit;
}

// Driver code
int main()
{
	int M = 16; // Weight of knapsack
	Item a[] = { { 45, 3 }, { 10, 5 }, {30 ,9} ,{45,5}};

	int n = sizeof(a) / sizeof(a[0]);

	// Function call
	cout << "Maximum profit we can obtain = "
		<< fractionalKnapsack(M, a, n);
	return 0;
}
