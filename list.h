#ifndef NODE_H
#define NODE_H
#include <string>
#include <utility>
class List{
    public:
    virtual bool isEmpty() = 0;
    virtual int getSize() = 0;
    virtual node* insert(pair<int,string>,node* a) = 0;
    virtual node* remove(int k,node* a) = 0;
    virtual void print(node* a) = 0;
    virtual string searchNode(node* a,int k) = 0;
};

#endif
