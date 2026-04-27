#include <iostream>
using namespace std;

// Function to find the safe position
int josephus(int n, int k) {
    if (n == 1)
        return 0;   // Base case (0-based indexing)

    return (josephus(n - 1, k) + k) % n;
}

int main() {
    int n, k;

    cout << "Enter number of people (n): ";
    cin >> n;

    cout << "Enter step count (k): ";
    cin >> k;

    int safePosition = josephus(n, k) + 1;  // Convert to 1-based indexing

    cout << "The safe position is: " << safePosition << endl;

    return 0;
}