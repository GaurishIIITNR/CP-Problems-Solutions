#include <bits/stdc++.h>
using namespace std;
struct gaurish_tree_node
{
    int data;
    struct gaurish_tree_node *left, *right;
};
gaurish_tree_node *newNode(int data)
{
    gaurish_tree_node *temp = new gaurish_tree_node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
int count_leaf(struct gaurish_tree_node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return count_leaf(root->left) + count_leaf(root->right);
}
int main()
{
    struct gaurish_tree_node *root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    cout << "Total No of Leaf Node in give Tree: ";
    cout << count_leaf(root) << endl;
    return 0;
}