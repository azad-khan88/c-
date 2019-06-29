#include<iostream>
using namespace std;
int main(){
    enum class Day{MONDAY,TUESDAY,WEDNESDAY};
    Day d;
    d=Day::MONDAY;
    if(d==Day::MONDAY){
        cout<<"Hurray";
    }
    return 0;
}