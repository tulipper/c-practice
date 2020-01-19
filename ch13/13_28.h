#include <string>
class TreeNode {
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree {
private:
    TreeNode *root;
};