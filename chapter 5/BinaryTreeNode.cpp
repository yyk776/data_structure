class BinaryTreeNode
{
friend class BinaryTree; //声明二叉树类为友元类，以便访问私有成员变量
private:
    int data; //结点数据域
    BinaryTreeNode * left = nullptr; //指向左子树
    BinaryTreeNode * right = nullptr; //指向右子树
public:
    BinaryTreeNode(int value); //不指定子树的构造函数
    ~BinaryTreeNode();
};

BinaryTreeNode::BinaryTreeNode(int value)
{
    data = value;
}

BinaryTreeNode::~BinaryTreeNode()
{
}
