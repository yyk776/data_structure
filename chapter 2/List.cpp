template<class type>

class List
{
private:
    
public:
    List();
    ~List();
    void clear();
    bool isEmpty();
    bool append(const type value);
    bool insert(const int p, const type value);
    type delete(const int p);
    type getValue(const int p);
    bool setValue(const int p, const type value);
    int getPosition(const type value);
};


