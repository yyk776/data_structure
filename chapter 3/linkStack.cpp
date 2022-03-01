#include"../chapter 2/linkNode.cpp"
//带头节点的链栈
class linkStack
{
private:
    linkNode * top; //栈顶指针
    int size; //栈的当前大小

public:
    linkStack();
    ~linkStack();
    bool push(int value);
    bool pop();
};

linkStack::linkStack()
{
    top = nullptr;
    size = 0;
}

linkStack::~linkStack()
{
    while(top != nullptr){
        linkNode * p = top;
        top = top->next;
        delete p;
    }
    size = 0;
}

bool linkStack::push(int v)
{
    linkNode* p = new linkNode(v,top);
    top = p;
    size++;
    return true;
}

bool linkStack::pop()
{
    if(size==0) return false; //判断合法性
    linkNode * p = top;
    top = top->next;
    delete p;
    size--;
    return true;
}

int main()
{
    linkStack* ls = new linkStack();
    ls->push(1);
    ls->push(2);
    ls->push(3);
    ls->push(4);
    ls->push(5);
    ls->pop();
    ls->~linkStack();
}
