
class Hashh{
    public:
    virtual bool isEmpty2() = 0;
    virtual int hashFunction(int k) = 0;
    virtual void insertHash(int k,string v) = 0;
    virtual void removeItem(int key) = 0;
    virtual string searchHash(int key) = 0;
    virtual void printHash() = 0;
};
