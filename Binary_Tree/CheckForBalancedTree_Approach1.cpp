//// T.C = O(N)^2

/* A binary tree node structure
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
   private:
   
    int height(struct Node* node){
        
        //basecase
        if(node == NULL) return 0;
            
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left,right)+1;
        return ans;
        }
        
        
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //base case
        if(root ==NULL){
            return true;
        }
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->right)-height(root->left))<=1;
        
        if(left && right && diff){
            return 1;
        }
        
        else{
            return false;
        }
        
        
        
    }
    
    
};