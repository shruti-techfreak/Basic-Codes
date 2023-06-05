#include<iostream>
using namespace std;
class Animal{
public:
    void dog()
    {
        cout<<"Dog"<<endl;
    }
};
class Barking: public Animal{
public:
    void barking()
    {
    cout<<"Barking"<<endl;
    }
};
class Eating: public Barking{
public:
    void eating(){
        cout<<"Eating"<<endl;
    }
};
int main(){
    Eating e1;
    e1.dog();
    e1.barking();
    e1.eating();
return 0;
}
