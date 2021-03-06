//User function Template for C++
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
int countNonLeafNodes(Node* root)
{
    if(root==NULL){
        return 0;
    }
    if(!root->right&&!root->left){
        return 0;
    }
    else{
        return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
    }
}
