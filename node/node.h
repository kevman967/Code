class node
{
    public:
    node(int);
    void setdata(int);
    int getdata() const;
    void setnextptr(node*);
    node *getnextptr() const;
};