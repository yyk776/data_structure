using namespace std;
#include<iostream>
//顺序表
class arrList
{
private:
    int max; //顺序表的最大容量
    int length = 0; //顺序表当前的长度
    int *list; //指向数组的指针
public:
    arrList(int size); //构造函数
    ~arrList(); //析构函数
    bool insert(int value); //插入一个值
    int getPos(int value); //获取一个值的下标
    bool del(int pos); //删除一个值
};

arrList::arrList(int size)
{
    list = new int[size]; //分配size大小的内存空间
    max = size; //设定最大容量
}

arrList::~arrList()
{
    delete [] list; //释放内存空间
}

bool arrList::insert(int v){
    if(length >= max) return false; //判断插入是否合法
    list[length++] = v; //插入值后再自增
    return true;
}

int arrList::getPos(int v){
    for(int i = 0; i < length; i++){
        if(list[i] == v) return i;
    }
    return -1; //没找到就返回-1
}

bool arrList::del(int p){
    if(p >= length) return false; //判断删除是否合法
    while(p < length){
        list[p] = list[++p];
    }
    length--;//当前长度减一
    return true;
}

//测试
int main(){
    arrList * list1 = new arrList(10);
    list1->insert(5);
    list1->insert(6);
    cout<<list1->getPos(6)<<endl;
    list1->del(1);
}

