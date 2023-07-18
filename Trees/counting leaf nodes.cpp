#include <iostream>

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    if (newNode) {
        newNode->value = value;
        newNode->left = newNode->right = nullptr;
    }
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

int countLeafNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    Node* root = nullptr;
    int node_values[] = {5, 3, 8, 1, 4, 7, 10};
    int num_nodes = sizeof(node_values) / sizeof(node_values[0]);

    for (int i = 0; i < num_nodes; ++i) {
        root = insertNode(root, node_values[i]);
    }

    int leaf_node_count = countLeafNodes(root);
    std::cout << "Total number of leaf nodes: " << leaf_node_count << std::endl;

    return 0;
}
