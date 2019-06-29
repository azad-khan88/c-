#include"lib.hpp"
using namespace std;
int main(){
    set<string,greater<string>> names{"azad","Khan","Stuti","sahu"};
    cout<<" The size of the set is "<<names.size()<<endl;
    if(names.empty()){
        cout<<" the set is empty"<<endl;
    }
    else
    {
        cout<<"the set is not empty"<<endl;
    }

    names.insert("Azad");
    names.insert("zzad");

    names.erase("azad");
    names.erase(names.find("Azad"));
    names.emplace("azad");
    names.emplace("Azad");
    for(auto itm:names){
        cout<<itm<<" ";
    }
}