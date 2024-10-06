#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(int *arr, int size) {
    stack<int> st;
    vector<int> ans(size);
    st.push(-1);
    for (int i = size - 1; i >= 0; i--) {
        int curr = arr[i];

        // Pop elements from the stack that are not smaller than the current element
        while (st.top() >= curr) {
            st.pop();
        }

        // If stack is empty, it means no smaller element to the right
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top();
        }

        // Push the current element onto the stack
        st.push(curr);
    }
    return ans;
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> final(size);
    final = nextSmallerElement(arr, size);

    // Output the result
    for (int i = 0; i < final.size(); i++) {
        cout << final[i] << " ";
    }
    cout << endl;

    return 0;
}
