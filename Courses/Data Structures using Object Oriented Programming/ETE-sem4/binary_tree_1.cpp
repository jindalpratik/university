#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int max_height = 0;
int height = 0;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    std::cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void 

void find_height(Node* node)
{ 
    height++;
    if(node == NULL)
    {
        return;
    }
    if(node->left == NULL && node->right == NULL)  
    {
        max_height = max(height, max_height);
        height--;
        return;
    }
    // height += 1;
    // if(node == NULL)
    // {
    //     return;
    // }
    find_height(node->left);
    find_height(node->right);
    height -=1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n;i++)
    {
        cin >> arr[i];
    }
    queue<Node *>q;
    int index = 1;
    Node *root = new Node(arr[0]);
    q.push(root);
    while(index<n && !q.empty())
    {
        Node *front = q.front();
        q.pop();
        if(arr[index] != -1)
        {
            front->left = new Node(arr[index]);
            q.push(front->left);
        }
        index++;
        
        if (index < n && arr[index] != -1)
        {
            front->right  = new Node(arr[index]);
            q.push(front->right);
        }
        index++;
    }

    preorder(root);
    find_height(root);
    std::cout << max_height;
}