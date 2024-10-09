#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        // base cases
        if (n == 0) return 1; //agar 0 wala concept smjh nhi aarha toh u can change the base case
        //and return 1 for n==1 and return 2 for n==2 yeh toh solve krke dekha h
        if (n == 1) return 1;
        // nth stair can be reached either from (n-1)th stair or (n-2)th stair
        int ans = climbStairs(n - 1) + climbStairs(n - 2);
        return ans;
    }
};

int main() {
    Solution solution;
    int stairs;
    
    cout << "Enter the number of stairs: ";
    cin >> stairs;
    
    int result = solution.climbStairs(stairs);
    cout << "Number of ways to climb " << stairs << " stairs: " << result << endl;
    
    return 0;
}
