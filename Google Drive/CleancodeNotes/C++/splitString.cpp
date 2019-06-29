#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include<memory>
#include"lib.hpp"
using namespace std;

int main(){
vector<tuple<int,string>> students;
students.push_back({1,"Azad"});
students.push_back({2,"Stuti"});

for(auto itm:students){
    cout<<get<0>(itm)<<" ";
    cout<<get<1>(itm)<<" ";
}
}