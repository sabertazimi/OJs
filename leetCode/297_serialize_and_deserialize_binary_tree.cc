/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream out;
        _serialize(root, out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return _deserialize(in);
    }
private:
    void _serialize(TreeNode *root, ostringstream &out) {
        if (root) {
            out << root->val << " ";
            _serialize(root->left, out);
            _serialize(root->right, out);
        } else {
            out << "# ";
        }
    }

    TreeNode *_deserialize(istringstream &in) {
        string val;
        in >> val;

        if (val == "#") {
            return NULL;
        }

        TreeNode *root = new TreeNode(stoi(val));
        root->left = _deserialize(in);
        root->right = _deserialize(in);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
