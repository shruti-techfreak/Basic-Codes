#include<iostream>
using namespace std;
class Biscuits{
public:
    void biscuit()
    {
        cout<<"Oreo"<<endl;
    }
};
class Chocolate: public Biscuits{
public:
    void choco()
    {
        cout<<"Chocolate flavour"<<endl;
    }
};
class Vanilla: public Biscuits{
public:
    void vanilla()
    {
        cout<<"Vanilla flavour"<<endl;
    }
};
class Strawberry: public Biscuits{
public:
    void strawberry()
    {
        cout<<"Strawberry flavour"<<endl;
    }
};
int main()
{
    Chocolate c1;
    Vanilla v1;
    Strawberry s1;
    c1.biscuit();
    c1.choco();
    s1.biscuit();
    s1.strawberry();
    v1. vanilla();
    return 0;
}
