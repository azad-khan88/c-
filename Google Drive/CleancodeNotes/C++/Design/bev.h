#ifndef BEV_H
#define BEV_H
#include<iostream>
#include<string>
#include<memory>
using namespace std;
class Beverage{
public:
virtual void description()=0;
virtual double cost()=0;
};

class condiments:public Beverage{

};

class Mocha:public condiments{
    shared_ptr<Beverage> mocha=nullptr;
    public:
    Mocha(shared_ptr<Beverage> m){
        mocha=m;
    }

    void description() override{
        cout<<"This is mocha";
    }
    
    double cost() override{
        return 0.5+mocha->cost();
    }
};

class coffee:public Beverage{
    double c=2.09;
    string desc;
    public:
    void description() override{
        cout<<desc;
    }
    double cost(){
        return c;
    }
};
#endif
