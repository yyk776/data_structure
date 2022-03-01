using namespace std;
#include<iostream>

class arrQueue
{
private:
    int max; //最大长度
    bool flag = true; //标志上一次操作类型，判断满或者空状态
    int front = 0; //队头指针
    int rear = 0; //队尾指针
    int * list; //顺序存储结构
public:
    arrQueue(int size);
    ~arrQueue();
    bool enQueue(int value); //入队
    bool deQueue(); //出队
};

arrQueue::arrQueue(int size)
{
    list = new int[size];
    max = size;
}

bool arrQueue::enQueue(int value)
{
    if((front == rear) && !flag) return false; //判断队满
    list[rear] = value;
    rear = (rear + 1) % max;
    flag = false;
    return true;
}

bool arrQueue::deQueue(){
    if((front == rear) && flag) return false; //判断队空
    front = (front + 1) % max;
    flag = true;
    return true;
}

arrQueue::~arrQueue()
{
    delete [] list;
}

int main()
{
    arrQueue * q = new arrQueue(5);
    q->enQueue(1);
    q->enQueue(1);
    q->enQueue(1);
    q->enQueue(1);
    q->enQueue(1);
    cout<<q->enQueue(1)<<endl;
    q->deQueue();
    q->deQueue();
    q->deQueue();
    q->deQueue();
    q->deQueue();
    cout<<q->deQueue()<<endl;
    q->~arrQueue();
}
