#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int min_cost_efficiency(vector<int>& efficiency) {
    int n = efficiency.size();
    sort(efficiency.begin(), efficiency.end());

    int min_cost = INT_MAX;

    for (int i = 0; i < n; i++) {
        vector<int> pairs;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                pairs.push_back(efficiency[j]);
            }
        }

        int cost = 0;
        for (int j = 1; j < n - 1; j += 2) {
            cost += abs(pairs[j] - pairs[j - 1]);
        }

        min_cost = min(min_cost, cost);
    }

    return min_cost;
}

int main() {
    int n;
    cin >> n;
    vector<int> efficiency(n);

    for (int i = 0; i < n; i++) {
        cin >> efficiency[i];
    }

    int result = min_cost_efficiency(efficiency);
    cout << result << endl;

    return 0;
}