class Stack
{
private:
    int max;
    int top = -1;
    int * list;
public:
    Stack(int size);
    ~Stack();
    bool push(int value);
    bool pop();
};

Stack::Stack(int size)
{
    max = size;
    list = new int[size];
}

Stack::~Stack()
{
    delete [] list;
}

bool Stack::push(int value)
{
    if(top >= max) return false; //判断压入是否合法
    list[++top] = value;
}

bool Stack::pop()
{
    if(top == -1) return false;  //判断删除是否合法
    top--;
    return true;
}

int main()
{
    Stack * s = new Stack(5);
    s->push(1);
    s->push(2);
    s->pop();
    s->~Stack();
}