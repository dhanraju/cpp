// Binary search tree
#include<iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data){
    if(root == NULL) {
	root = GetNewNode(data);
    }
    // If the data is greater than root, insert on right side, else left side.
    // TODO(Dhanu): Avoid recursive technique and use temp nodes and loops.
    else if(data <= root->data) {
	root->left = Insert(root->left, data);
    }
    else {
	root->right = Insert(root->right, data);
    }

    return root;
}

bool Search(BstNode* root, int data) {
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}
int main() {
    BstNode* root;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);

    int number;
    cout << "Enter number be searched\n";
    cin >> number;
    if(Search(root, number) == true)
	cout << "Found\n";
    else
	cout << "Not Found\n";
}


// Ref:
// https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28
