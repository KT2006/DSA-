//number repetition ke aadhar par agar loop detect krne chaloge toh muh ke bal giroge
// isiliye repeating address ke aadhar par loop dhundne niklo
#include <iostream>
#include <map>

using namespace std;

// Definition for singly-linked list node
class Node {
public:
    int val;
    Node *next;

    Node(int x) : val(x), next(nullptr) {}
};

// Function to detect a cycle in the linked list
bool hasCycle(Node *head) {
    map<Node*, bool> table;//ek mapping table banaya jismein node ka address aur true false ka column hoga
    Node* temp = head;
    while (temp != nullptr) {//iterate kr rha hu
        if (table[temp] == false) {//by default false hoga, so pehle iteration pe true mark kr rha hu
            table[temp] = true;
        } else {
            return true;//second iteration m agar true dikh gya toh smjhlunga ki cycle h
        }
        temp = temp->next;//as usual temp ko aage badhaunga
    }
    return false;
}

int main() {
    // Creating a simple linked list with a cycle for testing
    Node* node1 = new Node(3);
    Node* node2 = new Node(2);
    Node* node3 = new Node(0);
    Node* node4 = new Node(-4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // creates a cycle

    bool result = hasCycle(node1);

    if (result) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle detected in the linked list." << endl;
    }

    // Clean up memory (in a real scenario, this would need careful handling due to the cycle)
    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
