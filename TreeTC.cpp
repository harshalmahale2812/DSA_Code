#include <iostream>
using namespace std;
struct node
{
    char data;
    node *left;
    node *right;
};
node *createbst(char d, node *&root)
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
int takeip(int d, node *&root)
{
    while (d != -1)
    {
        createbst(d, root);
        cin >> d;
    }
    return 0;
}
void inorder(char d, node *root)
{
    if (root == 0)
        return;
    inorder(d, root->left);
    cout << root->data << " ";
    inorder(d, root->right);
}
void preorder(char d, node *root)
{
    if (root == 0)
        return;
    cout << root->data << " ";
    preorder(d, root->left);
    preorder(d, root->right);
}
void postorder(char d, node *root)
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
    char d;
    cout << "Enter Data (pree -1 to stop) : - ";
    cin >> d;
    switch (d)
    {
    case 'A':
        return 1;
        break;
    case 'B':
        return 2;
        break;
    case 'C':
        return 3;
        break;
    case 'D':
        return 4;
        break;
    case 'E':
        return 5;
        break;
    case 'F':
        return 6;
        break;
    case 'G':
        return 7;
        break;
    case 'H':
        return 8;
        break;
    case 'I':
        return 9;
        break;
    case 'J':
        return 10;
        break;
    case 'K':
        return 11;
        break;
    case 'L':
        return 12;
        break;
    case 'M':
        return 13;
        break;
    case 'N':
        return 14;
        break;
    case 'O':
        return 15;
        break;
    case 'P':
        return 16;
        break;
    case 'Q':
        return 17;
        break;
    case 'R':
        return 18;
        break;
    case 'S':
        return 19;
        break;
    case 'T':
        return 20;
        break;
    case 'U':
        return 21;
        break;
    case 'V':
        return 22;
        break;
    case 'W':
        return 23;
        break;
    case 'X':
        return 24;
        break;
    case 'Y':
        return 25;
        break;
    case 'Z':
        return 26;
        break;
    }
    takeip(d, root);
    cout << "Preorder :- ";
    preorder(d, root);
    cout << "\nInorder :- ";
    inorder(d, root);
    cout << "\nPost-order :- ";
    postorder(d, root);
    return 0;
}