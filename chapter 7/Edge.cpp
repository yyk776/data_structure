class Edge
{
friend class Graph;
private:
    int from; //始点
    int to; //终点
    int weight; //权重
public:
    Edge(int f, int t, int w);
    ~Edge();
};

Edge::Edge(int f, int t, int w)
{
    from = f;
    to = t;
    weight = w;
}

Edge::~Edge()
{
}
