// level order traversal of binary tree
// time complexity: o(n) coz for every node we are entering q once nd coming out of q once which is O(1) operation, thus, const work
// auxilary space = theta(n) or width of tree
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
void PrintLevelOrderLine(Node *root)
{
    if(root==NULL)
        return;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false)
    {
        int count= q.size();// must to create a separate variable bcoz q size will change inside the loop
        for(int i =0;i<count;i++)
        {
            Node *curr= q.front();
            q.pop();

            cout<<(curr->key)<<" ";
            if(curr->left!= NULL)
                q.push(curr->left);
            if(curr->right!= NULL)
                q.push(curr->right);
        }
        cout<<"\n";
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left =  new Node (40);
    PrintLevelOrderLine(root);
    }