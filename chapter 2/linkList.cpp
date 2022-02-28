#include"linkNode.cpp"
using namespace::std;
#include<iostream>

//实现有头节点的链表
class linkList
{
private:
    linkNode * head; // 头节点
    
public:
    int length = 0; //链表长度
    linkList();
    ~linkList();
    bool insert(int value); //在末尾插入结点
    bool del(int pos); //删除该下标的结点
    bool isEmpty(); //判空
};

linkList::linkList()
{
    head = new linkNode(-1); 
}

linkList::~linkList()
{
    delete(head);
}

bool linkList::insert(int value){
    linkNode* newNode = new linkNode(value);
    linkNode* p = head;
    for(int i = 0; i < length; i++){
        p = p->next;
    }
    p->next = newNode;
    length++;
    return true;
}

bool linkList::del(int pos){
    if(pos < 0 || pos>=length) return false; //判断越界
    linkNode* p = head;
    for(int i = 0; i < pos; i++){
        p = p->next;
    }//找到pos的前一个,p
    p->next = p->next->next; //使链表跳过p
    length--;
    return true;
}

bool linkList::isEmpty(){
    if(head->next == nullptr) return true;
    return false;
}

int main(){
    linkList* l = new linkList();
    l->insert(1);
    l->insert(2);
    l->insert(3);
    cout<<l->isEmpty()<<endl;
    l->del(2);
}
