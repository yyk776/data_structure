//结点
class linkNode
{
private:
    int data; //数据
    
public:
    linkNode * next; //下一个结点的指针
    linkNode(int value); 
    linkNode(int v, linkNode* n);
};

linkNode::linkNode(int v)
{
    data = v;
    next = nullptr;
}

linkNode::linkNode(int v, linkNode* n)
{
    data = v;
    next = n;
}

