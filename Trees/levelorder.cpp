// level order traversal of binary tree 
#include<iostream>
#include<queue>
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
void PrintLevelOrder(Node *root)
{
    if(root==NULL)
        return;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false)
    {
       Node *curr= q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!= NULL)
            q.push(curr->left);
        if(curr->right!= NULL)
            q.push(curr->right);
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root ->right = new Node(30);
    root->left->left =  new Node (40);
    PrintLevelOrder(root);
    }