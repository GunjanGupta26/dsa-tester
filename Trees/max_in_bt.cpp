#include<iostream>
#include<algorithm>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int maxNode(Node *root){
    if(root==NULL)
        return INT_MIN;
    else
    return max(root->key, max(maxNode(root->left), maxNode(root->right)));
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(30);
    root ->right = new Node(40);
    root->left->left =  new Node (80);
    root->left->left->right =  new Node (70);
    root ->right->left = new Node(60);
    root ->right->right = new Node(20);
    cout<< maxNode(root);
}
// time complexity : O(n)
// auxilary space :O(h), max no of func calls in func call stack at any moment is h +1