/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class TreePrinter {
public:
    vector<vector<int> > printTree(TreeNode* root) {
        // write code here
        vector<vector<int> > result;
        if (root == NULL) {
			vector<int> temp;
            result.push_back(temp);
        } else {
            
            vector<TreeNode*> queue;
            queue.push_back(root);
            
            while(!queue.empty()) {
            
            	vector<TreeNode*> nextLevel;
              
                vector<int> temp0;
                while(!queue.empty()) {
                    if (queue.front()->left != NULL) nextLevel.push_back(queue.front()->left);
                    if (queue.front()->right != NULL) nextLevel.push_back(queue.front()->right);
                    temp0.push_back(queue.front()->val);
                    queue.erase(queue.begin());
                }
                
                result.push_back(temp0);
                queue = nextLevel;
                
            }

        }
        return result;
    }
};
