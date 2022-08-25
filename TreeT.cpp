#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *createbst(int d, node *&root)
{
    if (root == 0)
    {
        root = new node;
        root->data = d;
        root->left = 0;
        root->right = 0;
        return root;
    }
    if (root->data > d)
        root->left = createbst(d, root->left);
    else
        root->right = createbst(d, root->right);
    return root;
}
void takeip(int d, node *&root)
{
    while (d != -1)
    {
        createbst(d, root);
        cin >> d;
    }
}
void inorder(int d, node *root)
{
    if (root == 0)
        return;
    inorder(d, root->left);
    cout << root->data << " ";
    inorder(d, root->right);
}
void preorder(int d, node *root)
{
    if (root == 0)
        return;
    cout << root->data << " ";
    preorder(d, root->left);
    preorder(d, root->right);
}
void postorder(int d, node *root)
{
    if (root == 0)
        return;
    postorder(d, root->left);
    postorder(d, root->right);
    cout << root->data << " ";
}
int main()
{
    node *root = 0;
    int d;
    cout << "Enter Data (pree -1 to stop) : - ";
    cin >> d;
    takeip(d, root);
    cout << "Preorder :- ";
    preorder(d, root);
    cout << "\nInorder :- ";
    inorder(d, root);
    cout << "\nPost-order :- ";
    postorder(d, root);
    return 0;
}