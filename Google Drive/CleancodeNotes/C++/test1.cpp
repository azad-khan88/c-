#include<iostream>
using namespace std;
int count(int a, int b){
    auto c=a+b;
    int co=0;
    while(c){
        if(c&1 == 1)
        co++;
        c=c>>1;
    }
    return co;

}
int  main(){
    string s="990";
    s.insert(2,5);
    cout<<s;
    return 0;
}