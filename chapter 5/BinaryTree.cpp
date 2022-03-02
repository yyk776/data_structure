#include "BinaryTreeNode.cpp"

class BinaryTree
{
private:
    BinaryTreeNode * root; //根节点
public:
    BinaryTree();
    ~BinaryTree();
};

BinaryTree::BinaryTree()
{
    root = nullptr;
}

BinaryTree::~BinaryTree()
{
}
