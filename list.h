#ifndef NODE_H
#define NODE_H
class List{
    public:
    virtual bool isEmpty() = 0;
    virtual int getSize() = 0;
    virtual node* insert(int e,node* a) = 0;
    virtual int remove() = 0;
    virtual void print(node* a) = 0;
};

#endif
