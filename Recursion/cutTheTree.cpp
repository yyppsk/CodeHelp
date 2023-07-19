#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
int inorder(TreeNode *ptr)
{
    inorder(ptr->left);

    inorder(ptr->right);
}
TreeNode *construct(const vector<pair<int, int>> &edges, const vector<int> &data)
{

    TreeNode *root = new TreeNode(data[node - 1]);
    for (const auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
    }
}
int main()
{
    vector<int> data = {1, 2, 3, 4, 5, 6};
    vector<pair<int, int>> edges = {{1, 2}, {1, 3}, {2, 6}, {3, 4}, {3, 5}};
    return 0;
}
// first delete the edge (1,2)
// inorder(ptr->left)(ptr->right)
// val[node] = left->data + right->data + itself